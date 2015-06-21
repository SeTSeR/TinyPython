#include "parserglobal.h"

int InputStatement::parse()
{
//	std::cout << "Called InputStatement" << std::endl;
	scan();
	if(Token1!='x') expected("Variable");
	int result;
	if(mode)
	{
		std::cin >> result;
		storevar(Value, result);
	}
	scan();
	return 0;
}
