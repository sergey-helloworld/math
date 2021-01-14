#include "BasicNumber.h"

double BasicNumber::toDouble() const {
	return _number;
}

BasicNumber::BasicNumber(double d) : _number(d) {
}

std::shared_ptr<MathObject> BasicNumber::operator*(const MathObject &m) const {
	double result = _number * m.toDouble();
	return std::make_shared<BasicNumber>(BasicNumber{ result });
}

std::shared_ptr<MathObject> BasicNumber::operator+(const MathObject &m) const {
	double result = _number + m.toDouble();
	return std::make_shared<BasicNumber>(BasicNumber{ result });
}

MathObject& BasicNumber::operator+=(const MathObject &m) {
	_number = _number + m.toDouble();
	return *this;
}

void BasicNumber::print() const {}