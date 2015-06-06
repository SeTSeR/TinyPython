#include "scannerglobal.h"

Operator* Operator::scan()
{
	std::string* result = new std::string("");
	if(!isOp(Look)) expected("Operator");
	while(isOp(Look))
	{
		*result += Look;
		Look = mygetchar();
	}
	Operator* resultobject = new Operator((*result)[1], *result);
	return resultobject;
}
