#include "Env.h"

Env::Env() {
	_config = {
		{"key", "test"} 
	};
};


std::string Env::get(std::string name) {
	return _config[name];
};