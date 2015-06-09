#include "scannerglobal.h"

White* White::scan()
{
	while(isWhite(Look))
	{
		Look = mygetchar();
	}
	White* result = new White(' ', " ");
	return result;
}
