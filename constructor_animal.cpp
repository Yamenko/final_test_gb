#include "constructor_animal.h"
#include "pack_animal.h"
#include "pet_animal.h"

Animal* ConstructorAnimal::CreateNewAnimal(eAnimal type)
{
	switch (type)
	{
	case PET:	return new PetAnimal();		break;
	case PACK:	return new PackAnimal();	break;
	default:	return nullptr;				break;
	}
}


Animal* ConstructorAnimal::CreateNewAnimal(eAnimal type, std::string& species)
{
	Animal* retAnimal = CreateNewAnimal(type);
	retAnimal->SetSpecies(species);
    return retAnimal;
}

Animal* ConstructorAnimal::CreateNewAnimal(eAnimal type, std::string& species, std::string& birthday)
{
	Animal* retAnimal = CreateNewAnimal(type, species);
	retAnimal->SetBirthday(birthday);
    return retAnimal;
}
