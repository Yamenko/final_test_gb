#pragma once
#include <string>

class ActionInterface{
public:
	virtual ~ActionInterface() = default;

	virtual std::string Voi�e() = 0;
	virtual std::string Action(const int i) = 0;
};
