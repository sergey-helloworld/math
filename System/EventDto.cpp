#include "EventDto.h"

EventDto::EventDto(std::string name) : _name{ name } {};

std::string EventDto::getName() {
	return _name;
}

void EventDto::setName(std::string name) {
	_name = name;
}