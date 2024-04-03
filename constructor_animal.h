#pragma once
#include "animal.h"

/**
    @enum  eAnimal
    @brief ѕеречисление дл€ типов животных
**/
enum eAnimal {
	PET,
	PACK
};

/**

    @class   ConstructorAnimal
    @brief    ласс конструктор дл€ формировани€ и заполнени€ классов животных
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

