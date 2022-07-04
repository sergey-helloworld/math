#pragma once
#include "MathCommand.h"
class MatrixAdd :
    public MathCommand
{
public:
    virtual void execute();
    virtual ~MatrixAdd() = default;
};

