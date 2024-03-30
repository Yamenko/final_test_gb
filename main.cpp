#include <iostream>
#include "console_view.h"

int main()
{
	setlocale(LC_ALL, "ru-RU");


	ListOfAnimals* ls = new  ListOfAnimals();
	ConsoleView& cv = ConsoleView::getInstance();

	cv.SetListPtr(ls); // добавление класса лист в консоль для работы
	cv.StartConsole(); // начало работы

	return 0;
}