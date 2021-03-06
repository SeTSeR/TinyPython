#include "parserglobal.h"

int Factor::parse()
{
	int result = 0;
	int negate = 0;
	if(Token1=='-')
	{
		negate = 1;
		scan();
	}
	switch(Token1)
	{
		case 'x':
			result = readvar(Value);
			break;
		case 'n':
			result = toint(Value);
			break;
		case '(':
			scan();
			Expression* expr = new Expression();
			result = expr->parse();
			if(Token1!=')') error("Scope hadn't been closed.");
			break;
	}
	scan();
	return result;
}
