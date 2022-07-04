#include "MatrixAdd.h"

void MatrixAdd::execute() {
	auto result = *_args[0] + *_args[1];
	_result = result;
}