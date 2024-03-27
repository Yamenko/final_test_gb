#include "animal.h"

std::string Animal::Action(int i)
{
    if (i < do_something.size()) {  return do_something[i]; }
    else  { return "ERROR"; }
}

int Animal::SetNewAction(std::string& s)
{
    for (std::string& act : do_something){
        if (act == s) { return 0; }
    }

    do_something.push_back(s);
    return 1;
}
