#include "parserglobal.h"
#include <cstdlib>

int executeelse = 0;

int toint(std::string toconvert)
{
	return atoi(toconvert.c_str());
}

void skipblock()
{
	while(Look!='}') Look = mygetchar();
	Look = mygetchar();
}
