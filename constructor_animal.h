#pragma once
#include "pack_animal.h"
#include "pet_animal.h"

class ConstructorAnimal
{
public:
	ConstructorAnimal() = default;
	~ConstructorAnimal() = default;

	Animal* CreateNewAnimal(eAnimal type);
	Animal* CreateNewAnimal(eAnimal type, std::string& species);
	Animal* CreateNewAnimal(eAnimal type, std::string& species, std::string& birthday);
};

