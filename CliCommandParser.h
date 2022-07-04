#pragma once
#include "Command.h"
#include <memory>
#include <string>
#include <vector>
#include "CommandFactory.h"
#include "Matrix.h"
#include "BasicNumber.h"
#include "MathCommand.h"

class CliCommandParser
{
public:
	static std::vector<std::shared_ptr<Command>> parse(int argc, char* argv[]);
private:
	static void parseParamsObject(std::shared_ptr<Command> c, const std::string &param);
	static std::shared_ptr<MathObject> parseMathObject(const std::string &param);
	static Matrix parseMatrix(std::string param);
};

