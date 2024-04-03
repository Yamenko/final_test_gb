#pragma once
#include <string>

class ActionInterface{
public:
	virtual ~ActionInterface() = default;

	virtual std::string Voiñe() = 0;
	virtual std::string GetAction(const int i) = 0;
};
