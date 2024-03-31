#include "console_view.h"
#include <regex>

ConsoleView& ConsoleView::getInstance()
{
	static ConsoleView console_view;
	return console_view;
}

void ConsoleView::StartConsole()
{
	InitConsoleMenu();

	while (true)
	{
		std::cout << "Начало работы: (0 - для выхода)\n";
		for (auto el : console_menu)
		{
			std::cout << el.first << " " << el.second->GetTextMenu() << std::endl;
		}

		int index = console_menu[0]->DoWork();
		console_menu[index]->DoWork();
	}
}

void ConsoleView::SetListPtr(ListOfAnimals* list_){
	if (list == nullptr) { list = list_; }
}

void ConsoleView::InitConsoleMenu()
{
	console_menu[0] = new MainMenu();
	console_menu[1] = new AddAnimalMenu();
}


