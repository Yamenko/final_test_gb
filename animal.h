#pragma once
//
//8. ООП и Java
//- Создать иерархию классов в Java, который будет повторять диаграмму классов созданную в задаче 6(Диаграмма классов) .
// 
//9. Программа-реестр домашних животных
//- Написать программу на Java, которая будет имитировать реестр домашних животных.
//Должен быть реализован следующий функционал:
//9.1. Добавление нового животного
//- Реализовать функциональность для добавления новых животных в реестр.
//Животное должно определяться в правильный класс (например, "собака", "кошка", "хомяк" и т.д.)
//9.2. Список команд животного
//- Вывести список команд, которые может выполнять добавленное животное (например, "сидеть", "лежать").
//9.3. Обучение новым командам
//- Добавить возможность обучать животных новым командам.
//9.4 Вывести список животных по дате рождения
//9.5. Навигация по меню
//- Реализовать консольный пользовательский интерфейс с меню для навигации между вышеуказанными функциями.
//10. Счетчик животных
//Создать механизм, который позволяет вывести на экран общее количество созданных животных любого типа (Как домашних, так и вьючных), то есть при создании каждого нового животного счетчик увеличивается на “1”.


// В составы классов которых в случае 
// Pets войдут классы : собаки, кошки, хомяки, а в класс 
// Pack animals войдут : Лошади, верблюды и ослы).
// Каждый тип животных будет характеризоваться(например, имена, даты рождения, выполняемые команды и т.д)

#include <string>
#include <vector>

#include "action_interface.h"


/**

    @class   Animal
    @brief   Основной класс животного
    @details ~Включает большую часть основных функций
    @author  Yamenko
    @date    3.04.2024

**/
class Animal : public ActionInterface {
public:
	Animal() = default;
	~Animal() override = default;

	std::string Voiсe() override	{ return word; }
	void SetVoice(const std::string& s)	{ word = s; }

	std::string GetAction(int i) override;
	int SetAction(std::string& s);
	size_t GetCountOfActions() const { return do_something.size(); }


	void SetSpecies(const std::string& s) { species = s; }
	std::string& GetSpecies() { return species; }

	void SetBirthday(const std::string& s);
	std::string& GetBirthday() { return birthday; }

	std::string GetInfo();

	unsigned int StringToIntData(const std::string& s);
	unsigned int i_birthday = 0;

private:
	std::string species;	// Вид животного
	std::string birthday;

	std::string word;
	std::vector<std::string> do_something;

};
