#pragma once
#include "list_of_animals.h"


class ConsoleView
{
public:
	ConsoleView(ListOfAnimals* list_) : list(list_){};
	~ConsoleView() = default;

	int StartConsole();

private:
	ListOfAnimals* list = nullptr;

	int MainMenu();
	int MainMenuText();
	int AddNewAnimal();
	int AddNewAction() { return 0; };

	void PrintList();
};

