#include "animal.h"

std::string Animal::GetAction(int i)
{
	 if (i < do_something.size()) {  return do_something[i]; }
	 else  { return "NO any actions"; }
}


int Animal::SetAction(std::string& s)
{
	for (std::string& act : do_something){
		if (act == s) { return 0; } // ��� ���� ����� ��������
	}

	do_something.push_back(s);
	return 1;
}

/**
    @brief ���������� ���� �������� ���������
    @param s - ������ ���� � ������� yyyy/mm/dd
**/
void Animal::SetBirthday(const std::string& s)
{
	birthday = s;
	i_birthday = StringToIntData(s);
	return;
}

std::string Animal::GetInfo()
{
	return "Species: " + GetSpecies() + ", birthday: " + GetBirthday();
}

unsigned int Animal::StringToIntData(const std::string& s)
{
	std::string tmp;
	for(auto el : s)
	{
		if (std::isdigit(el)) { tmp.push_back(el); }
	}

	if (!tmp.empty()) { return std::stoi(tmp); }
	else { return 0; }
}
