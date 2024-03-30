#pragma once
#include <string>

class ConsoleMenu
{
public:
	const std::string& GetTextMenu() { return menu_str; }
	virtual int DoWork() = 0;

private:
	std::string menu_str = "Test";
};

class MainMenu : public ConsoleMenu
{
public:
	int DoWork() override;

private :
	std::string menu_str = "Main Menu";
};

class AddAnimalMenu : public ConsoleMenu
{
public:
	int DoWork() override;

private:
	std::string menu_str = "Add Animal Menu";
};

//int ConsoleView::MainMenu()
//{
//	std::string s;
//	std::cout << "¬ыберите пункт: ";
//	std::cin >> s;
//
//	system("cls");
//
//	// проверка на число
//	const std::regex base("[0-9]*");
//	if (std::regex_match(s, base)) {
//		return std::stoi(s);
//	}
//	else { return -1; } // не число!
//}
//
//int ConsoleView::AddAnimalMenu()
//{
//	return 0;
//}
