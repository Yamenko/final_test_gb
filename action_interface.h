#pragma once
#include <string>

/**

    @class   ActionInterface
    @brief   Интерфейс для получения действий любого животного 
    @details ~Для дальнейшей разработки пригодится
    @author  Yamenko
    @date    3.04.2024

**/
class ActionInterface{
public:
	virtual ~ActionInterface() = default;

	virtual std::string Voiсe() = 0;
	virtual std::string GetAction(const int i) = 0;
};
