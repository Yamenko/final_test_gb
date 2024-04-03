#include "constructor_animal.h"
#include "pack_animal.h"
#include "pet_animal.h"

/**
    @brief  ‘ункци€ создани€ класса животного принимающа€ 1 параметр (остальные по умолчанию)
    @param  type - ѕеречисление типа животных
    @retval ptrAnimal - ¬озвращает указатель на созданный класс животного
**/
Animal* ConstructorAnimal::CreateNewAnimal(eAnimal type)
{
	switch (type)
	{
	case PET:	return new PetAnimal();		break;
	case PACK:	return new PackAnimal();	break;
	default:	return nullptr;				break;
	}
}

/** 
    @brief  ‘ункци€ создани€ класса животного принимающа€ 2 параметра (остальные по умолчанию)
    @param  type    - ѕеречисление типа животных
    @param  species - ѕорода животного в виде строки
    @retval ptrAnimal - ¬озвращает указатель на созданный класс животного
**/
Animal* ConstructorAnimal::CreateNewAnimal(eAnimal type, std::string& species)
{
	Animal* retAnimal = CreateNewAnimal(type);
	retAnimal->SetSpecies(species);
    return retAnimal;
}

/**
    @brief  ‘ункци€ создани€ класса животного принимающа€ 3 параметра
    @param  type     - ѕеречисление типа животных
    @param  species  - ѕорода животного в виде строки
    @param  birthday - ƒата рождени€ в виде строки формата yyyy/mm/dd
    @retval ptrAnimal - ¬озвращает указатель на созданный класс животного
**/
Animal* ConstructorAnimal::CreateNewAnimal(eAnimal type, std::string& species, std::string& birthday)
{
	Animal* retAnimal = CreateNewAnimal(type, species);
	retAnimal->SetBirthday(birthday);
    return retAnimal;
}
