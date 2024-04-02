#include "animal.h"

std::string Animal::Action(int i)
{
	 if (i < do_something.size()) {  return do_something[i]; }
	 else  { return "ERROR"; }
}


int Animal::SetNewAction(std::string& s)
{
	for (std::string& act : do_something){
		if (act == s) { return 0; } // уже есть такое действие
	}

	do_something.push_back(s);
	return 1;
}

std::string Animal::GetInfo()
{
	return "Species: " + GetSpecies() + ", birthday: " + GetBirthday();
}
