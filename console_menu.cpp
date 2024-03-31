#include <iostream>
#include <regex>

#include "console_menu.h"

int MainMenu::DoWork()
{
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
