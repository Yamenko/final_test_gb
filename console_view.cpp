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
		std::cout << "������ ������: (0 - ��� ������)\n";
		switch (MainMenu())
		{
		case 1 : std::cout << "������\n"; break; // ������� ������ ����
		case 2 : std::cout << "������\n"; break;

		case 0: std::cout << "�� �������!\n"; return;
			default: std::cout << "����� ����� �� ���))\n"; break;
		}
	}
}

void ConsoleView::SetListPtr(ListOfAnimals* list_){
	if (list == nullptr) { list = list_; }
}


