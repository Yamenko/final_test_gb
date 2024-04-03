#pragma once
#include "animal.h"

/**

    @class   PackAnimal
    @brief   Класс вьючного животного
    @details ~
    @author  Yamenko
    @date    3.04.2024

**/
class PackAnimal : public Animal
{
public:
	PackAnimal();
	~PackAnimal() override = default;

	void SetMaxCargo(const int i) { max_cargo = i; }
	int GetMaxCargo() const { return max_cargo; }

private:
	int max_cargo;
};
