#include "console_view.h"

ConsoleView& ConsoleView::getInstance()
{
	static ConsoleView console_view;
	return console_view;
}

void ConsoleView::StartConsole()
{
	std::string str = "";
	while (true)
	{
		switch (MainMenu())
		{
		case 1 : std::cout << "первый"; break;
		case 2 : std::cout << "второй"; break;

			default: std::cout << "чтото пошло не так))"; break;
		}


		//return;
	}

}

void ConsoleView::SetListPtr(ListOfAnimals* list_){
	if (list == nullptr) { list = list_; }
}

int ConsoleView::MainMenu()
{
	unsigned int i;
	std::string s;
	std::cout << "Начало работы:\nвыберите пункт: ";
	std::cin >> i;
	std::cin.unget();

	if (i > 0)	{ return i; }
	else		{ return -1; }
}

