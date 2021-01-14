#pragma once
#include <vector>
#include "MathObject.h"
#include <memory>
class Matrix : public MathObject
{
public:
	struct MatrixSize {
		size_t row;
		size_t col;
	};

	struct ElementCordsAbsolute : MatrixSize {
		ElementCordsAbsolute(size_t row, size_t col) : MatrixSize{row, col} {}
	};

	struct ElementCords : ElementCordsAbsolute {
		ElementCords(size_t row, size_t col) : ElementCordsAbsolute{ row - 1, col - 1 } {}
		ElementCords(ElementCordsAbsolute a) : ElementCordsAbsolute{a.row, a.col} {}
	};

	Matrix(const std::vector<std::vector<std::shared_ptr<MathObject>>> &m);
	Matrix(MatrixSize size);
	MatrixSize getSize() const;
	std::shared_ptr<MathObject> getElement(ElementCords c) const;
	void setElement(ElementCords c, const std::shared_ptr<MathObject> &value);
	void print() const;
	std::shared_ptr<MathObject> operator* (const MathObject &m2) const;
	std::shared_ptr<MathObject> operator+ (const MathObject &m2) const;
	MathObject& operator+=(const MathObject& m);
private:
	std::vector<std::vector<std::shared_ptr<MathObject>>> _m;
	MatrixSize _size;
};

