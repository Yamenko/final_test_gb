#include <iostream>
#include "console_view.h"

int main()
{
	setlocale(LC_ALL, "ru-RU");

	ConsoleView* cv = new ConsoleView(new ListOfAnimals());

	// ������ ������
	cv->StartConsole(); 

	return 0;
}