#include "MatrixEquation.h"
#include <iostream>
#include <algorithm>

MatrixEquation::MatrixEquation(const Matrix m) : _m{m} {}

std::shared_ptr<MathObject> MatrixEquation::solve() {
	auto lastRow = _m.getSize().row;
	auto elementForDivPos = Matrix::ElementCords{1,1};
	size_t firstRow = 1;
	for (size_t i = 1; i <= _m.getSize().col; i++) {
		auto rowPos = lastRow;
		if (firstRow > lastRow) {
			break;
		}
		for (;;) {
			auto prevRow = rowPos - 1;
			if (rowPos == firstRow) {
				divRow(prevRow, _m.getElement(elementForDivPos));
				break;
			}
			else {
				toRowEchelonForm(Matrix::ElementCords{ rowPos,i }, 
					Matrix::ElementCords{ prevRow,i });
			}
			rowPos--;
		}
		elementForDivPos.col ++;
		elementForDivPos.row ++;
		firstRow ++;
	}
	return this->findUnknowns();
}

std::shared_ptr<MathObject> MatrixEquation::findUnknowns()
{
	auto& rrefMatrix = _m;
	std::vector<std::shared_ptr<MathObject>> unknowns;
	auto rows = rrefMatrix.getSize().row;
	auto cols = rrefMatrix.getSize().col;
	auto posToSubtitute = Matrix::ElementCords{ 1,1 };
	for (size_t i = rows; i > 0; i--) {
		auto rightHandEl = rrefMatrix.getElement(Matrix::ElementCords{ i, cols });
		for (size_t j = cols-1; j > 0; j--) {
			if (rrefMatrix.getElement(Matrix::ElementCords{ i, j })->toDouble() == 1) {
				posToSubtitute = Matrix::ElementCords{ i,j };
				unknowns.push_back(rightHandEl);
				break;
			}
			else {
				if (posToSubtitute.col == i) {
					*rightHandEl -= *(*rrefMatrix.getElement(Matrix::ElementCords{ i,j }) *
						(*unknowns[cols - j - 1]));
				}
				else {
					*rightHandEl - *rrefMatrix.getElement(Matrix::ElementCords{ i,j });
				}
				
			}
		}
	}
	std::reverse(unknowns.begin(), unknowns.end());
	return std::make_shared<Matrix>(Matrix{ {unknowns} });
}

void MatrixEquation::toRowEchelonForm(Matrix::ElementCords el1Cords, Matrix::ElementCords el2Cords) {
	auto el1 = _m.getElement(el1Cords);
	auto el2 = _m.getElement(el2Cords);
	auto divRes = *el1 / *el2;
	for (size_t i = 0; i < _m.getSize().col; i++) {
		auto obj = (
			*_m.getElement(Matrix::ElementCordsAbsolute{ el2Cords.row, i }) *
			*divRes);
		_m.setElement(Matrix::ElementCordsAbsolute{ el2Cords.row, i }, obj);
	}
	for (size_t i = 0; i < _m.getSize().col; i++) {
		_m.setElement(Matrix::ElementCordsAbsolute{ el1Cords.row, i },
			*_m.getElement(Matrix::ElementCordsAbsolute{ el1Cords.row, i }) -
			*_m.getElement(Matrix::ElementCordsAbsolute{ el2Cords.row, i }));
	}
}

void MatrixEquation::divRow(size_t rowNumber, std::shared_ptr<MathObject> divOn) {
	for (size_t i = 0; i < _m.getSize().col; i++) {
		auto obj = (
			*_m.getElement(Matrix::ElementCordsAbsolute{ rowNumber, i }) /
			*divOn);
		_m.setElement(Matrix::ElementCordsAbsolute{ rowNumber, i }, obj);
	}
}
