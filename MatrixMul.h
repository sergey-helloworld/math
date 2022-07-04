#pragma once
#include "MathCommand.h"
class MatrixMul :
    public MathCommand
{
public:
    virtual void execute();
    virtual ~MatrixMul() = default;
};

