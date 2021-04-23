#include "CliCommandParser.h"

std::vector<std::shared_ptr<Command>> CliCommandParser::parse(int argc, char* argv[]) {
	auto result = std::vector<std::shared_ptr<Command>>{};
	auto fact = CommandFactory{};
	for (size_t i = 1; i < argc; i++) {
		std::string arg = argv[i];
	    if (arg.find("--") != std::string::npos) {
				parseParamsObject(fact.getCommands().back(), arg.substr(2));
		}
		else if (arg.find("-") != std::string::npos) {
			result.push_back(fact.create(arg.substr(1)));
		}
	}
	/*for (auto& a : result) {
		a->execute();
	}*/
	return result;
}

void CliCommandParser::parseParamsObject(std::shared_ptr<Command> c, const std::string &param) {
	auto ptr = std::dynamic_pointer_cast<MathCommand>(c);
	if (ptr) {
		auto obj = parseMathObject(param);
		ptr->addArg(obj);
	}
}

Matrix CliCommandParser::parseMatrix(std::string param) {
	auto split = [](auto& param, auto delimiter) {
		auto parsed = std::vector<std::string>{};

		size_t pos = 0;
		std::string token;
		while ((pos = param.find(delimiter)) != std::string::npos) {
			token = param.substr(0, pos);
			parsed.push_back(token);
			param.erase(0, pos + delimiter.length());
		}
		parsed.push_back(param);
		return parsed;
	};

	param = param.substr(1);
	param = param.substr(0, param.length() - 1);

	auto v = std::vector<std::vector<std::shared_ptr<MathObject>>>{};
	auto matrixCols = split(param, std::string{ ";" });
	for (auto& col : matrixCols) {
		v.push_back(std::vector<std::shared_ptr<MathObject>> {});
		auto elements = split(col, std::string{ "," });
		for (auto& elem : elements) {
			v.back().push_back(std::shared_ptr<MathObject>{parseMathObject(elem)});
		}
	}
	return Matrix{ v };
}

std::shared_ptr<MathObject> CliCommandParser::parseMathObject(const std::string &param) {
	if (param.find_first_not_of("0123456789") == std::string::npos) {
		// BasicNumber
		return std::make_shared<BasicNumber>(BasicNumber{ std::stod(param) });
	}
	else if (param.find(",") && param[0] == '[' && param[param.length()-1] == ']') {
		return std::make_shared<Matrix>(parseMatrix(param));
	}
}
