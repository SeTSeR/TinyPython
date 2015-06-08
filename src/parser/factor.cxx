#include "parserglobal.h"

int Factor::parse()
{
	Token* currenttoken = scan();
	int result = 0;
	int negateresult = 0;
	if(currenttoken->token=='-')
	{
		negateresult = 1;
		currenttoken = scan();
	}
	switch(currenttoken->token)
	{
		case 'n':
			result = toint(currenttoken->value);
			break;
		case 'x':
			result = readvar(currenttoken->value);
			break;
		case '(':
			currenttoken = scan();
			Expression* inScopes = new Expression();
		 	result = inScopes->parse();
			currenttoken = scan();
			if(currenttoken->token!=')') error("Scopes hasn't been closed");
			break;
	}
	if(negateresult) result*=(-1);
	return result;
}
