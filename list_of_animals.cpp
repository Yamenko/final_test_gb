#include "list_of_animals.h"

ListOfAnimals::ListOfAnimals(){
	constructor_animal = new ConstructorAnimal;
}

int ListOfAnimals::AddAnimalToList(const Animal* animal)
{
	my_list_animal.push_back(*animal);
	return 1;
}

int ListOfAnimals::AddAnimalToList(eAnimal type, std::string species, std::string birthday)
{
	const Animal* animal = constructor_animal->CreateNewAnimal(type, species, birthday);
	return AddAnimalToList(animal);
}

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

void ListOfAnimals::OutputList()
{
	for (int i = 0 ; i < my_list_animal.size(); ++i)
	{
		std::cout << i << " " << my_list_animal[i].GetInfo() << std::endl;
	}
}

bool operator< (const Animal& a1, const Animal& a2)
{
	return (a1.i_birthday < a2.i_birthday);
}

int ListOfAnimals::SortByData()
{
	std::sort(my_list_animal.begin(), my_list_animal.end());
	return 0;
}
