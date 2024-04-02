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
		case 2: std::cout << "����� �������� � ������: " << list->GetCountOfAnimals() << std::endl; break;
		case 3: list->PrintList(); break;

		case 0: std::cout << "�� �������!"; return 0; break;
		default: std::cout << "���-�� ����� �� ���...";
		}
	}
	return 0;
}


int ConsoleView::MainMenu()
{
	MainMenuText();

	std::string s;
	std::cout << "�������� �����: ";
	std::cin >> s;

	system("cls");

	// �������� �� �����
	const std::regex base("[0-9]*");
	if (std::regex_match(s, base)) {
		return std::stoi(s);
	}
	else { return -1; } // �� �����!
	return 0;
}

int ConsoleView::MainMenuText()
{
	std::cout << "������ ������ (0 - ��� ������):" << std::endl;
	std::cout << "1. �������� ��������" << std::endl;
	std::cout << "2. ���������� �������� � ������" << std::endl;
	std::cout << "3. ������� ������ ��������" << std::endl;
	//std::cout << "" << std::endl;
	//std::cout << "" << std::endl;
	std::cout << "0 - �����" << std::endl;

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

		// ----- >>>> ����� ���� ���������
		std::cout << "����� �������� ����� ���������\n(0 - ��������, 1 - �������):\n";
		std::cin >> s;

		// �������� �� �����
		const std::regex base("[0-1]");
		if (std::regex_match(s, base)) {
			type = static_cast<eAnimal>(std::stoi(s));
			break;
		}
		else {
			std::cout << "����� ������ 0 ��� 1. ��� �� ������!" << std::endl;
			continue;
		}

	}
	// ----- >>>> ������
	std::cout << "����� ������:\n";
	std::cin >> species;

	// ----- >>>> ���� ��������
	std::cout << "���� ��������:\n";
	std::cin >> birthday;

	list->AddAnimalToList(type, species, birthday);

	system("cls");
	std::cout << "��������! " << ((type)? "������� " : "�������� ") << species << " " << birthday << std::endl;

	return 0;
}


