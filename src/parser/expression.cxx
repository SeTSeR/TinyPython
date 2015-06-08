#include "parserglobal.h"

int Expression::parse()
{
	Term* term = new Term();
	int result = term->parse();
	Token* currenttoken = scan();
	while((currenttoken->token=='+')&&(currenttoken->token=='-'))
	{
		switch(currenttoken->token)
		{
			case '+':
				currenttoken = scan();
				result+=term->parse();
				break;
			case '-':
				currenttoken = scan();
				result-=term->parse();
			default:
				error("Unrecognized token");
		}
		currenttoken = scan();
	}
	return result;
}
