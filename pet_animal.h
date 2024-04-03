#pragma once
#include "animal.h"

/**

    @class   PetAnimal
    @brief   Класс домашнего животного
    @details ~
    @author  Yamenko
    @date    3.04.2024

**/
class PetAnimal : public Animal
{
public:
	~PetAnimal() override = default;

	void SetName(const std::string& s) { name = s; }
	std::string& GetName() { return name; }

	void SetBreed(const std::string& s) { breed = s; }
	std::string& GetBreed() { return breed; }

private:
	std::string name;
	std::string breed;
};

