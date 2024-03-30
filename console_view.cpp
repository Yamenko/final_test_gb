#include "console_view.h"
#include <regex>

ConsoleView& ConsoleView::getInstance()
{
	static ConsoleView console_view;
	return console_view;
}

void ConsoleView::StartConsole()
{
	while (true)
	{
		std::cout << "Начало работы: (0 - для выхода)\n";
		switch (MainMenu())
		{
		case 1 : std::cout << "первый\n"; break; // функции вывода меню
		case 2 : std::cout << "второй\n"; break;

		case 0: std::cout << "До скорого!\n"; return;
			default: std::cout << "чтото пошло не так))\n"; break;
		}
	}
}

void ConsoleView::SetListPtr(ListOfAnimals* list_){
	if (list == nullptr) { list = list_; }
}


