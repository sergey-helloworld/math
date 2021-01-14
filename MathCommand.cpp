#include "MathCommand.h"


void MathCommand::addArg(const std::shared_ptr<MathObject>& arg) {
	_args.push_back(arg);
}

//void MathCommand::execute() {}