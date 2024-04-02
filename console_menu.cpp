#include <iostream>
#include <regex>

#include "console_menu.h"


int AddAnimalMenu::DoWork(){
    system("cls");
    int type;
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
            type =  std::stoi(s);
        }
        else { 
            std::cout << "Нужно ввести 0 или 1. Это не сложно!" << std::endl;
            continue;
        }

        // ----- >>>> Порода
        std::cout << "Какая порода:\n";
        std::cin >> species;

        // ----- >>>> День рождения
        std::cout << "День рождения:\n";
        std::cin >> birthday;

        return 0;
    }
}