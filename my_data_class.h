#pragma once
#include <string>
#include <time.h>

class MyDataClass
{
public:
	MyDataClass() = default;
	~MyDataClass() = default;

	MyDataClass(std::string& s_data);

private:
	tm data_str;
};

