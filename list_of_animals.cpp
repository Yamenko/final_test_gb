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

void ListOfAnimals::PrintList()
{
	for (int i = 0 ; i < my_list_animal.size(); ++i)
	{
		std::cout << i << " " << my_list_animal[i].GetInfo() << std::endl;
	}
}
