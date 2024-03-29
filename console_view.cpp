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
		case 1 : std::cout << "������"; break;
		case 2 : std::cout << "������"; break;

			default: std::cout << "����� ����� �� ���))"; break;
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
	std::cout << "������ ������:\n�������� �����: ";
	std::cin >> i;
	std::cin.unget();

	if (i > 0)	{ return i; }
	else		{ return -1; }
}

