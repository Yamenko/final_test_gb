#include "list_of_animals.h"

/**
    @brief ListOfAnimals object constructor
**/
ListOfAnimals::ListOfAnimals(){
	constructor_animal = new ConstructorAnimal;
}

/**
    @brief  Функция добавления нового животного в список
    @param  animal - Указатель на класс животного
    @retval число  - Возвращает кол-во добавленых животных
**/
int ListOfAnimals::AddAnimalToList(const Animal* animal)
{
	my_list_animal.push_back(*animal);
	return 1;
}

/**
    @brief  Функция добавления нового животного в список (принимает на вход обычные параметры)
    @param  type     - Перечисление которое содержит тип животного
    @param  species  - Порода животного в виде строки
    @param  birthday - Дата рождения - строка в формате yyyy/mm/dd 
    @retval число    - Возвращает кол-во добавленых животных
**/
int ListOfAnimals::AddAnimalToList(eAnimal type, std::string species, std::string birthday)
{
	const Animal* animal = constructor_animal->CreateNewAnimal(type, species, birthday);
	return AddAnimalToList(animal);
}

/**
    @brief  Функция получения указателя на конкретное животное по номеру в списке
    @param  id - Номер в списке животного которое хотим получить
    @retval ptrAnimal - Указатель на класс животного
**/
Animal* ListOfAnimals::GetAnimal(int id)
{
	if (id < my_list_animal.size())
	{
		return &my_list_animal[id];
	}
	else {
		return nullptr;
	}
}

/**
    @brief Функция для вывода на экран всего списка животных
**/
void ListOfAnimals::OutputList()
{
	for (int i = 0 ; i < my_list_animal.size(); ++i)
	{
		std::cout << i << " " << my_list_animal[i].GetInfo() << std::endl;
	}
}

/**
    @brief  operator< Переопределенный оператор для сравнения 2х классов животных, чтобы работала функция сравнения
    @param  a1 - Ссылка на первое животное, 
    @param  a2 - Ссылка на второе животное
    @retval bool - true, if left object is less than right
**/
bool operator< (const Animal& a1, const Animal& a2)
{
	return (a1.i_birthday < a2.i_birthday);
}

/**
    @brief  Функция сортировки животных в списке, животные сортируются по дате рождения
    @retval число - возвращаемый параметр
**/
int ListOfAnimals::SortByData()
{
	std::sort(my_list_animal.begin(), my_list_animal.end());
	return 0;
}
