#pragma once
#include "constructor_animal.h"

class ListOfAnimals{
public:
	ListOfAnimals();
	~ListOfAnimals() = default;

	int AddAnimalToList(const Animal* animal);
//	int AddAnimalToList(eAnimal type);
//	int AddAnimalToList(eAnimal type, std::string& species);
	int AddAnimalToList(eAnimal type, std::string species = nullptr, std::string birthday = nullptr);

	size_t GetCountOfAnimals() const { return my_list_animal.size(); }
private:
	ConstructorAnimal* constructor_animal;
	std::vector<Animal>my_list_animal;


};

