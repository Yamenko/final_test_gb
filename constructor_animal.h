#pragma once
#include "animal.h"

/**
    @enum  eAnimal
    @brief ������������ ��� ����� ��������
**/
enum eAnimal {
	PET,
	PACK
};

/**

    @class   ConstructorAnimal
    @brief   ����� ����������� ��� ������������ � ���������� ������� ��������
    @details ~
    @author  Yamenko
    @date    3.04.2024

**/
class ConstructorAnimal
{
public:
	ConstructorAnimal() = default;
	~ConstructorAnimal() = default;


	Animal* CreateNewAnimal(eAnimal type);
	Animal* CreateNewAnimal(eAnimal type, std::string& species);
	Animal* CreateNewAnimal(eAnimal type, std::string& species, std::string& birthday);
};

