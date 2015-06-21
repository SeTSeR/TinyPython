#include "scannerglobal.h"

Number* Number::scan()
{
	std::string* result = new std::string("");
	if(!isDigit(Look)) expected("Number");
	while(isDigit(Look))
	{
		(*result)+=Look;
		Look = mygetchar();
	}
	Number* resultobject = new Number(*result);
	return resultobject;
}
