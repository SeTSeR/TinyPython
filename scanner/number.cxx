#include "scannerglobal.h"

Number* Number::scan()
{
	int result = 0;
	if(!isDigit(Look)) expected("Number");
	while(isDigit(Look))
	{
		result = result*10 + Look;
		Look = mygetchar();
	}
	Number* resultobject = new Number(result);
	return resultobject;
}
