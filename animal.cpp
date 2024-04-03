#include "animal.h"


/**
    @brief  Функция получения одного из действий животного, по номеру в списке
    @param  i - Номер запрашиваемого действия
    @retval строка - Действие в виде строки
**/
std::string Animal::GetAction(int i)
{
	 if (i < do_something.size()) {  return do_something[i]; }
	 else  { return "NO any actions"; }
}

/**
    @brief  Функция добавления нового действия
    @param  s - Новое действие для добавления
    @retval число - Коды ошибок 
**/
int Animal::SetAction(std::string& s)
{
	for (std::string& act : do_something){
		if (act == s) { return 0; } // уже есть такое действие
	}

	do_something.push_back(s);
	return 1;
}

/**
    @brief Добавление даты рождения животного
    @param s - строка даты в формате yyyy/mm/dd
**/
void Animal::SetBirthday(const std::string& s)
{
	birthday = s;
	i_birthday = StringToIntData(s);
	return;
}

/**
    @brief  Функция получения информации о животном в виде строки
    @retval строка - Информация о животном
**/
std::string Animal::GetInfo()
{
	return "Species: " + GetSpecies() + ", birthday: " + GetBirthday();
}

/**
    @brief  Функция преобразования строки даты рождения в число для возомжности создать сортировку
    @param  s - строка даты
    @retval число - получившееся число после преобразований
**/
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
