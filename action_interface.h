#pragma once
#include <string>

/**

    @class   ActionInterface
    @brief   ��������� ��� ��������� �������� ������ ��������� 
    @details ~��� ���������� ���������� ����������
    @author  Yamenko
    @date    3.04.2024

**/
class ActionInterface{
public:
	virtual ~ActionInterface() = default;

	virtual std::string Voi�e() = 0;
	virtual std::string GetAction(const int i) = 0;
};
