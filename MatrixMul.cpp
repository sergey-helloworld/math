#include "MatrixMul.h"

void MatrixMul::execute() {
	auto result = *_args[0] * *_args[1];
	_result = result;
	//result->print();
}