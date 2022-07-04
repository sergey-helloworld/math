#pragma once
#include <string>
#include <map>
#include "SingletonObject.h"
#include "SystemObject.h"
class Env : public SingletonObject<Env>, public SystemObject
{
private:
	std::map<std::string, std::string> _config;
public:
	Env();
	std::string get(std::string name);
};