#include <iostream>
#include <regex>

#include "console_menu.h"

int MainMenu::DoWork()
{
    std::string s;
    std::cout << "¬ыберите пункт: ";
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
