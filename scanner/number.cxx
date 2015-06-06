#include "scannerglobal.h"

Number* Number::scan()
{
	int result = 0;
	if(!isDigit(Look)) expected("Number");
	while(isDigit(Look))
	{
		result = (10*result) + (Look-'0');
		Look = mygetchar();
	}
	Number* resultobject = new Number(result);
	return resultobject;
}
