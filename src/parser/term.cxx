#include "parserglobal.h"

int Term::parse()
{
	Factor* fact = new Factor();
	int result = fact->parse();
	Token* currenttoken = scan();
	while((currenttoken->token=='*')&&(currenttoken->token)=='/')
	{
		switch(currenttoken->token)
		{
			case '*':
				currenttoken = scan();
				result*=fact->parse();
				break;
			case '/':
				currenttoken = scan();
				result/=fact->parse();
				break;
			default:
				error("Unrecognized token");
		}
		currenttoken = scan();
	}
	return result;
}
