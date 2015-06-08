#include "scannerglobal.h"

Identifier* Identifier::scan()
{
	std::string* result = new std::string("");
	if(!isAlpha(Look)) expected("Identifier");
	while(isAlNum(Look))
	{
		*result += Look;
		Look = mygetchar();
	}
	Identifier* resultobject = new Identifier(*result);
	return resultobject;
}
