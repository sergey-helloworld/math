#pragma once
#include <vector>
#include <memory>
#include "MathObject.h"

class Equation
{
public:
	virtual std::shared_ptr<MathObject> solve() = 0;
	virtual ~Equation() = default;
};

