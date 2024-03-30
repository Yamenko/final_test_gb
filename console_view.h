#pragma once
#include <map>
#include "list_of_animals.h"
#include "console_menu.h"

class ConsoleView
{
public:
	ConsoleView() = default;
	~ConsoleView() = default;

	static ConsoleView& getInstance();

	void StartConsole();
	void SetListPtr(ListOfAnimals* list_);

private:
	ListOfAnimals* list = nullptr;

	std::map<int, ConsoleMenu*> console_menu;
};

