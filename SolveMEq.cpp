#include "SolveMEq.h"

void SolveMEq::execute() {
	auto eq = MatrixEquation{ *std::dynamic_pointer_cast<Matrix>(_args[0]) };
	auto result = eq.solve();
	_result = result;
}