#pragma once
#include "list_of_animals.h"	

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

	int MainMenu();
};

