#pragma once
#include "MathCommand.h"
#include "MatrixEquation.h"
#include <memory>
class SolveMEq :
    public MathCommand
{
public:
    virtual void execute();
    virtual ~SolveMEq() = default;
};

