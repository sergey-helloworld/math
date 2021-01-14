#include "Matrix.h"
#include "BasicNumber.h"
#include <iostream>
#include <string>

Matrix::Matrix(const std::vector<std::vector<std::shared_ptr<MathObject>>> &m) : _m{m},
_size{ MatrixSize{m.size(), m[0].size()} } {}

Matrix::MatrixSize Matrix::getSize() const {
	return _size;
}

std::shared_ptr<MathObject> Matrix::getElement(ElementCords c) const {
	return _m[c.row][c.col];
}

Matrix::Matrix(Matrix::MatrixSize size) : _size{size} {
	auto elems = std::vector<std::vector<std::shared_ptr<MathObject>>>{};
	for (size_t i = 0; i < _size.row; i++) {
		elems.push_back({{}});
	}
	for (size_t i = 0; i < elems.size(); i++) {
		auto zero = std::shared_ptr<BasicNumber>{ 0 };
		for (size_t j = 0; j < _size.col; j++) {
			elems[i].push_back(zero);
		}
	}
	_m = elems;
}

void Matrix::setElement(Matrix::ElementCords c, const std::shared_ptr<MathObject> &value) {
	_m[c.row][c.col] = value;
}

void Matrix::print() const {
	for (size_t i = 0; i < _size.row; i++) {
		std::string str = "";
		for (size_t j = 0; j < _size.col; j++) {
			auto obj = _m[i][j].get();
			str += std::to_string(obj->toDouble());
			str += " ";
		}
		std::cout << str << std::endl;
	}
}

std::shared_ptr<MathObject> Matrix::operator* (const MathObject &m2) const {
	auto &m2ref = (const Matrix&)m2;
	if (_size.row != m2ref.getSize().col) {
		throw std::exception{ "Matrix is not compatible" };
	}
	auto rowByColumn = [this, &m2ref](auto& m1row, auto& m2column) {
		std::shared_ptr<MathObject> sum = nullptr;
		for (size_t i = 0; i < _size.row; i++) {
			if (sum == nullptr) {
				//sum = (*_m[m1row][i] * (*m2ref._m[i][m2column]));
				sum = (*_m[i][m1row] * (*m2ref._m[m2column][i]));
			}
			else {
				//*sum += *(*_m[m1row][i] * (*m2ref._m[i][m2column]));
				*sum += *(*_m[i][m1row] * (*m2ref._m[m2column][i]));
			}
		}
		return sum;
	};

	Matrix::MatrixSize resultSize = { _size.col, m2ref.getSize().row };
	auto result = Matrix{ resultSize };
	for (size_t i = 0; i < resultSize.row; i++) {
		for (size_t j = 0; j < resultSize.col; j++) {
			auto value = rowByColumn(i,j);
			result.setElement(Matrix::ElementCordsAbsolute{ i,j }, value);
		}
	}
	return std::make_shared<Matrix>(result);
}

std::shared_ptr<MathObject> Matrix::operator+(const MathObject& m2) const {
	auto& m2ref = (const Matrix&)m2;
	if ((_size.row != m2ref.getSize().row) || (_size.col != m2ref.getSize().col)) {
		throw std::exception{ "Matrix is not compatible" };
	}
	auto result = Matrix{ _size };
	for (size_t i = 0; i < _size.row; i++) {
		for (size_t j = 0; j < _size.col; j++) {
			auto value = *_m[i][j] + *m2ref.getElement(Matrix::ElementCordsAbsolute{ i,j });
			result.setElement(Matrix::ElementCordsAbsolute{ i,j }, value);
		}
	}
	return std::make_shared<Matrix>(result);
}

MathObject& Matrix::operator+=(const MathObject& m) {
	return *this; //to do
}