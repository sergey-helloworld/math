#pragma once
#include <string>
#include "EventHandler.h"
#include "SingletonObject.h"
#include "EventDto.h"
class EventDispatcher : public SingletonObject<EventDispatcher>
{
public:
	template <typename... Args>
	void dispatch(Args... args) {
		auto h = EventHandler::getInstance();
		h->notifyAll(args...);
	}
};

