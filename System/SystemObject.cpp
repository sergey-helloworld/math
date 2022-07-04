#include "SystemObject.h"

SystemObject::SystemObject() {
	auto h = EventHandler::getInstance();
	h->addListener(this);
};

bool SystemObject::canHandleEvents() const {
	return true;
}

SystemObject::~SystemObject() {
	auto h = EventHandler::getInstance();
	h->removeListener(this);
}
