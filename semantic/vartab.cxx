#include "semanticglobal.h"

void storevar(std::string name, int value)
{
	vartab[name] = value;
}

int readvar(std::string name)
{
	return vartab[name];
}
