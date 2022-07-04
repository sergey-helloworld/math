#pragma once
#include <string>
#include "EventHandler.h"
#include <memory>
#include <iostream>
#include <tuple>
#include "EventDto.h"

class SystemObject
{
public:
	SystemObject();
	template <typename... Args>
	void handleEvent(Args... args) const {
		if (!this->canHandleEvents()) {
			return;
		}
		std::cout << "event handled" << std::endl;
	}
	virtual bool canHandleEvents() const;
	virtual ~SystemObject();
};

