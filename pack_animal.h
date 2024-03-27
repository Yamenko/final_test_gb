#pragma once
#include "animal.h"
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
