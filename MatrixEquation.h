#pragma once
#include "Equation.h"
#include "Matrix.h"
#include "BasicNumber.h"
class MatrixEquation :
    public Equation
{
public:
    MatrixEquation(const Matrix m);
    virtual std::shared_ptr<MathObject> solve();
    virtual ~MatrixEquation() = default;
private:
    std::shared_ptr<MathObject> findUnknowns();
    void toRowEchelonForm(Matrix::ElementCords el1Cords, Matrix::ElementCords el2Cords);
    void divRow(size_t rowNumber, std::shared_ptr<MathObject> divOn);
    Matrix _m;
};

