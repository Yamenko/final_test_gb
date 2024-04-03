#include "list_of_animals.h"

/**
    @brief ListOfAnimals object constructor
**/
ListOfAnimals::ListOfAnimals(){
	constructor_animal = new ConstructorAnimal;
}

/**
    @brief  ������� ���������� ������ ��������� � ������
    @param  animal - ��������� �� ����� ���������
    @retval �����  - ���������� ���-�� ���������� ��������
**/
int ListOfAnimals::AddAnimalToList(const Animal* animal)
{
	my_list_animal.push_back(*animal);
	return 1;
}

/**
    @brief  ������� ���������� ������ ��������� � ������ (��������� �� ���� ������� ���������)
    @param  type     - ������������ ������� �������� ��� ���������
    @param  species  - ������ ��������� � ���� ������
    @param  birthday - ���� �������� - ������ � ������� yyyy/mm/dd 
    @retval �����    - ���������� ���-�� ���������� ��������
**/
int ListOfAnimals::AddAnimalToList(eAnimal type, std::string species, std::string birthday)
{
	const Animal* animal = constructor_animal->CreateNewAnimal(type, species, birthday);
	return AddAnimalToList(animal);
}

/**
    @brief  ������� ��������� ��������� �� ���������� �������� �� ������ � ������
    @param  id - ����� � ������ ��������� ������� ����� ��������
    @retval ptrAnimal - ��������� �� ����� ���������
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
    @brief ������� ��� ������ �� ����� ����� ������ ��������
**/
void ListOfAnimals::OutputList()
{
	for (int i = 0 ; i < my_list_animal.size(); ++i)
	{
		std::cout << i << " " << my_list_animal[i].GetInfo() << std::endl;
	}
}

/**
    @brief  operator< ���������������� �������� ��� ��������� 2� ������� ��������, ����� �������� ������� ���������
    @param  a1 - ������ �� ������ ��������, 
    @param  a2 - ������ �� ������ ��������
    @retval bool - true, if left object is less than right
**/
bool operator< (const Animal& a1, const Animal& a2)
{
	return (a1.i_birthday < a2.i_birthday);
}

/**
    @brief  ������� ���������� �������� � ������, �������� ����������� �� ���� ��������
    @retval ����� - ������������ ��������
**/
int ListOfAnimals::SortByData()
{
	std::sort(my_list_animal.begin(), my_list_animal.end());
	return 0;
}
