#include "scannerglobal.h"

Keyword* Keyword::scan()
{
	std::string result = "";
	if(!isAlpha(Look)) expected("Keyword");
	while(isAlpha(Look))
	{
		result+=Look;
		Look = mygetchar();
	}
	Keyword* resultobject = new Keyword(Keyword::token, result);
	return resultobject;
}
