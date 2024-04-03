#pragma once
#include "list_of_animals.h"

/**

    @class   ConsoleView
    @brief   ����� ��� ������ � ��������. ����������� ������ ������ � �������������� � �������������
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

