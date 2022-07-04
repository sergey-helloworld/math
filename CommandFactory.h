#pragma once
#include <memory>
#include "Command.h"
#include <string>
#include <vector>

class CommandFactory
{
public:
	std::shared_ptr<Command> create(const std::string &name, const std::vector<std::string>& params = {});
	std::vector<std::shared_ptr<Command>> getCommands() const;
private:
	std::vector <std::shared_ptr<Command>> _commands;
};

