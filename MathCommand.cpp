#include "MathCommand.h"


void MathCommand::addArg(std::shared_ptr<MathObject> arg) {
	_args.push_back(arg);
}

std::vector<std::shared_ptr<MathObject>> MathCommand::getArgs() const {
	return _args;
}

std::shared_ptr<MathObject> MathCommand::getResult() const {
	return _result;
}

void MathCommand::addArgFront(std::shared_ptr<MathObject> arg) {
	_args.push_back(arg);
	auto first = _args[0];
	_args[0] = _args[1];
	_args[1] = first;
}

//void MathCommand::execute() {}