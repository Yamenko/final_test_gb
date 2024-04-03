#pragma once
//
//8. ��� � Java
//- ������� �������� ������� � Java, ������� ����� ��������� ��������� ������� ��������� � ������ 6(��������� �������) .
// 
//9. ���������-������ �������� ��������
//- �������� ��������� �� Java, ������� ����� ����������� ������ �������� ��������.
//������ ���� ���������� ��������� ����������:
//9.1. ���������� ������ ���������
//- ����������� ���������������� ��� ���������� ����� �������� � ������.
//�������� ������ ������������ � ���������� ����� (��������, "������", "�����", "�����" � �.�.)
//9.2. ������ ������ ���������
//- ������� ������ ������, ������� ����� ��������� ����������� �������� (��������, "������", "������").
//9.3. �������� ����� ��������
//- �������� ����������� ������� �������� ����� ��������.
//9.4 ������� ������ �������� �� ���� ��������
//9.5. ��������� �� ����
//- ����������� ���������� ���������������� ��������� � ���� ��� ��������� ����� �������������� ���������.
//10. ������� ��������
//������� ��������, ������� ��������� ������� �� ����� ����� ���������� ��������� �������� ������ ���� (��� ��������, ��� � �������), �� ���� ��� �������� ������� ������ ��������� ������� ������������� �� �1�.


// � ������� ������� ������� � ������ 
// Pets ������ ������ : ������, �����, ������, � � ����� 
// Pack animals ������ : ������, �������� � ����).
// ������ ��� �������� ����� �����������������(��������, �����, ���� ��������, ����������� ������� � �.�)

#include <string>
#include <vector>

#include "action_interface.h"


/**

    @class   Animal
    @brief   �������� ����� ���������
    @details ~�������� ������� ����� �������� �������
    @author  Yamenko
    @date    3.04.2024

**/
class Animal : public ActionInterface {
public:
	Animal() = default;
	~Animal() override = default;

	std::string Voi�e() override	{ return word; }
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
	std::string species;	// ��� ���������
	std::string birthday;

	std::string word;
	std::vector<std::string> do_something;

};
