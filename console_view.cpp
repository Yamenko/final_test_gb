#include "console_view.h"
#include <regex>

//ConsoleView& ConsoleView::getInstance()
//{
//	static ConsoleView console_view;
//	return console_view;
//}

int ConsoleView::StartConsole()
{
	if (!list) { return -1; }
	//InitConsoleMenu();

	while (true)
	{
		//system("cls");

		//int index = MainMenu();

		switch (MainMenu())
		{
		case 1: AddNewAnimal(); break;
		case 2: std::cout << "Всего животных в списке: " << list->GetCountOfAnimals() << std::endl; break;
		case 3: list->PrintList(); break;

		case 0: std::cout << "До скорого!"; return 0; break;
		default: std::cout << "что-то пошло не так...";
		}
	}
	return 0;
}


int ConsoleView::MainMenu()
{
	MainMenuText();

	std::string s;
	std::cout << "Выберите пункт: ";
	std::cin >> s;

	system("cls");

	// проверка на число
	const std::regex base("[0-9]*");
	if (std::regex_match(s, base)) {
		return std::stoi(s);
	}
	else { return -1; } // не число!
	return 0;
}

int ConsoleView::MainMenuText()
{
	std::cout << "Начало работы (0 - для выхода):" << std::endl;
	std::cout << "1. Добавить животное" << std::endl;
	std::cout << "2. Количество животных в списке" << std::endl;
	std::cout << "3. Выыести список животных" << std::endl;
	//std::cout << "" << std::endl;
	//std::cout << "" << std::endl;
	std::cout << "0 - выход" << std::endl;

	return 0;
}

int ConsoleView::AddNewAnimal()
{
	system("cls");
	eAnimal type;
	std::string species;
	std::string birthday;

	std::string s;
	while (true) {

		// ----- >>>> Выбор типа животного
		std::cout << "Какое животное будем добавлять\n(0 - домашнее, 1 - вьючное):\n";
		std::cin >> s;

		// проверка на число
		const std::regex base("[0-1]");
		if (std::regex_match(s, base)) {
			type = static_cast<eAnimal>(std::stoi(s));
			break;
		}
		else {
			std::cout << "Нужно ввести 0 или 1. Это не сложно!" << std::endl;
			continue;
		}

	}
	// ----- >>>> Порода
	std::cout << "Какая порода:\n";
	std::cin >> species;

	// ----- >>>> День рождения
	std::cout << "День рождения:\n";
	std::cin >> birthday;

	list->AddAnimalToList(type, species, birthday);

	system("cls");
	std::cout << "Добавили! " << ((type)? "вьючное " : "домашнее ") << species << " " << birthday << std::endl;

	return 0;
}


