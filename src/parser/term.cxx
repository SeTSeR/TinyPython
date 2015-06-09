#include "parserglobal.h"

int Term::parse()
{
	int result = 0;
	Factor* fact = new Factor();
	result = fact->parse();
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
	return result;
}
