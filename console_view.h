#pragma once
#include "list_of_animals.h"

/**

    @class   ConsoleView
    @brief   Класс для работы с консолью. Отображение списка команд и взаимодействие с пользователем
    @details ~
    @author  Yamenko
    @date    3.04.2024

**/
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
	int AddNewAction();
	int GetActionsAnimal();

	void PrintList();
};

