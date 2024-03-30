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

//int ListOfAnimals::AddAnimalToList(eAnimal type)
//{
//	const Animal* animal = constructor_animal->CreateNewAnimal(type);
//	return AddAnimalToList(animal);
//}
//
//int ListOfAnimals::AddAnimalToList(eAnimal type, std::string& species)
//{
//	const Animal* animal = constructor_animal->CreateNewAnimal(type, species);
//	return AddAnimalToList(animal);
//}
//
//
//int ListOfAnimals::AddAnimalToList(eAnimal type, std::string& species, std::string& birthday)
//{
//	const Animal* animal = constructor_animal->CreateNewAnimal(type, species, birthday);
//	return AddAnimalToList(animal);
//}
