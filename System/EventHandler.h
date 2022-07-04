#pragma once
#include "SystemObject.h"
#include <vector>
#include "SingletonObject.h"
#include <string>
#include <memory>
#include "EventDto.h"
#include <memory>

class SystemObject;

class EventHandler : public SingletonObject<EventHandler>
{
private:
	std::vector<SystemObject*> _objects;
public:
	void addListener(SystemObject* obj);
	void removeListener(SystemObject* obj);
	template <typename... Args>
	void notifyAll(Args... args) {
		for (auto& o : _objects) {
			o->handleEvent(args...);
		}
	}
};

