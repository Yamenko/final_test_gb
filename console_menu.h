#pragma once
#include <string>

class ConsoleMenu
{
public:
	ConsoleMenu(std::string s) { menu_str = std::move(s); }
	virtual ~ConsoleMenu() = default;

	const std::string& GetTextMenu() { return menu_str; }
	virtual int DoWork() = 0;

private:
	std::string menu_str;
};

class MainMenu : public ConsoleMenu
{
public:
	MainMenu() : ConsoleMenu(std::string("Main Menu")) {}
	~MainMenu() override = default;

	int DoWork() override;
};

class AddAnimalMenu : public ConsoleMenu
{
public:
	AddAnimalMenu() : ConsoleMenu(std::string("Add Animal Menu")) {}
	~AddAnimalMenu() override = default;

	int DoWork() override { return 0; }
};
