#include "CommandFactory.h"
#include "MatrixMul.h"

std::shared_ptr<Command> CommandFactory::create(const std::string &name, const std::vector<std::string>& params) {
	if (name == "mmul") {
		auto command =  std::make_shared<MatrixMul>(MatrixMul{});
		_commands.push_back(command);
		return command;
	}
}

std::vector<std::shared_ptr<Command>> CommandFactory::getCommands() const {
	return _commands;
}