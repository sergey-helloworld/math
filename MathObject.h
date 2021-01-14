#pragma once
#include <memory>

class MathObject
{
public:
	virtual double toDouble() const;
	virtual std::shared_ptr<MathObject> operator*(const MathObject &m) const = 0;
	virtual MathObject& operator+=(const MathObject& m) = 0;
	virtual std::shared_ptr<MathObject> operator+(const MathObject& m) const = 0;
	virtual void print() const = 0;
	virtual ~MathObject() = default;
};

