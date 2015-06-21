#include "parserglobal.h"

int Term::parse()
{
	int result = 0;
	Factor* fact = new Factor();
//	std::cout << "Called term" << std::endl;
	result = fact->parse();
//	std::cout << "Returned in term" << std::endl;
	while((Token1=='*')||(Token1=='/')||(Token1=='&'))
	{
		switch(Token1)
		{
			case '*':
				scan();
				result*=fact->parse();
				break;
			case '/':
				scan();
				result*=fact->parse();
				break;
			case '&':
				scan();
				result&=fact->parse();
		}
	}
	delete fact;
	return result;
}
