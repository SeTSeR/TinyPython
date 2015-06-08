#include "semanticglobal.h"

void storevar(std::string name, int value)
{
	if(vartab[name]==0) vartab[name] = value;
	else error("This variable has been already defined");
}

int readvar(std::string name)
{
	return vartab[name];
}
