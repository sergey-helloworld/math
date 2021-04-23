#pragma once
#include "MathObject.h"
#include <iostream>
#include <cmath>
class BasicNumber :
    public MathObject
{
public:
    BasicNumber(double d);
    virtual double toDouble() const;
    virtual std::shared_ptr<MathObject> operator*(const MathObject &m) const;
    virtual std::shared_ptr<MathObject> operator+(const MathObject &m) const;
    virtual std::shared_ptr<MathObject> operator/(const MathObject& m) const;
    virtual std::shared_ptr<MathObject> operator-(const MathObject& m) const;
    virtual MathObject& operator+=(const MathObject &m);
    virtual MathObject& operator-=(const MathObject& m);
    virtual ~BasicNumber() = default;
    virtual void print() const;
private:
    double _number;
};

