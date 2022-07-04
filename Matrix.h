#pragma once
#include <vector>
#include "MathObject.h"
#include <memory>
#include <stdexcept>
#include "System/SystemObject.h"
class Matrix : public MathObject, public SystemObject
{
public:
	struct MatrixSize {
		MatrixSize(size_t r, size_t c) {
			if (r == SIZE_MAX || c == SIZE_MAX) {
				throw std::invalid_argument{ "the size is max or passed value < 0" };
			}
			row = r;
			col = c;
		};
		size_t row;
		size_t col;
	};

	struct ElementCordsAbsolute : MatrixSize {
		ElementCordsAbsolute(size_t row, size_t col) : MatrixSize{row, col} {}
	};

	struct ElementCords : ElementCordsAbsolute {
		ElementCords(size_t row, size_t col) : ElementCordsAbsolute{ row == 0 ? 
				throw std::invalid_argument{"invalid argument: row == 0"} : row - 1, 
			col == 0 ? throw std::invalid_argument{ "invalid argument: col == 0" }: col - 1 } {}
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
	std::shared_ptr<MathObject> operator/ (const MathObject& m2) const;
	std::shared_ptr<MathObject> operator- (const MathObject& m2) const;
	MathObject& operator+=(const MathObject& m);
	MathObject& operator-=(const MathObject& m);
	virtual ~Matrix() = default;
	// virtual bool canHandleEvents() const {return false;} 
private:
	std::vector<std::vector<std::shared_ptr<MathObject>>> _m;
	MatrixSize _size;
};

