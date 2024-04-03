#include "my_data_class.h"


MyDataClass::MyDataClass(std::string& s_data)
{
	// поиск разделителя
	std::string delimiter;
	for (auto el : s_data){
		if (!std::isdigit(el)){
			delimiter = el;
			break;
		}
	}

	if (delimiter.empty()) {return;}


	//s_data.substr()


}
