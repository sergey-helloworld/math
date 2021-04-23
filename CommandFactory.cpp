#include "CommandFactory.h"
#include "MatrixMul.h"
#include "MatrixAdd.h"
#include "SolveMEq.h"

std::shared_ptr<Command> CommandFactory::create(const std::string &name, const std::vector<std::string>& params) {
	if (name == "mmul") {
		auto command =  std::make_shared<MatrixMul>(MatrixMul{});
		_commands.push_back(command);
		return command;
	}
	else if (name == "madd") {
		auto command = std::make_shared<MatrixAdd>(MatrixAdd{});
		_commands.push_back(command);
		return command;
	}
	else if (name == "solvemeq") {
		auto command = std::make_shared<SolveMEq>(SolveMEq{});
		_commands.push_back(command);
		return command;
	}
}

std::vector<std::shared_ptr<Command>> CommandFactory::getCommands() const {
	return _commands;
}