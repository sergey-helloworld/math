#include "EventHandler.h"

void EventHandler::addListener(SystemObject *obj) {
	_objects.push_back(obj);
}

void EventHandler::removeListener(SystemObject* obj) {
	for (std::size_t i = 0; i < _objects.size(); i++) {
		if (_objects[i] == obj) {
			auto it = _objects.begin();
			std::advance(it, i);
			_objects.erase(it);
			return;
		}
	}
}
