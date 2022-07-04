#pragma once
#include <string>
#include <tuple>

class EventDto
{
private:
	std::string _name;
public:
	EventDto(std::string name);
	std::string getName();
	void setName(std::string name);
};

