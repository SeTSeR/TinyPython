#include "scannerglobal.h"

scanner::Number* scanner::Number::scan()
{
	std::string* result = new std::string(" ");
	if(!isDigit(Look)) expected("Number");
	while(isDigit(Look))
	{
		*result += Look;
	}
	Number* resultobject = new Number('n', *result);
	return resultobject;
}
