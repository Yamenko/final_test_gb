#include <iostream>
#include "console_view.h"

int main()
{
	setlocale(LC_ALL, "ru-RU");


	ListOfAnimals* ls = new  ListOfAnimals();
	ConsoleView& cv = ConsoleView::getInstance();

	cv.SetListPtr(ls);

	cv.StartConsole();

	return 0;
}