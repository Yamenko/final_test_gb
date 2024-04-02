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

        // ----- >>>> ����� ���� ���������
    	std::cout << "����� �������� ����� ���������\n(0 - ��������, 1 - �������):\n";
        std::cin >> s;

        // �������� �� �����
        const std::regex base("[0-1]");
        if (std::regex_match(s, base)) {
            type =  std::stoi(s);
        }
        else { 
            std::cout << "����� ������ 0 ��� 1. ��� �� ������!" << std::endl;
            continue;
        }

        // ----- >>>> ������
        std::cout << "����� ������:\n";
        std::cin >> species;

        // ----- >>>> ���� ��������
        std::cout << "���� ��������:\n";
        std::cin >> birthday;

        return 0;
    }
}