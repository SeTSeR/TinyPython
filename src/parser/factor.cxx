#include "parserglobal.h"

int Factor::parse()
{
	int result = 0;
	int negate = 0;
	int notit = 0;
//	std::cout << "Called factor" << std::endl;
	if(Token1=='-')
	{
		negate = 1;
		scan();
	}
	if(Token1=='~')
	{
		notit = 1;
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
			delete expr;
			if(Token1!=')') error("Scope hadn't been closed.");
			scan();
			break;
	}
	if(negate) result*=(-1);
	if(notit) result=~result;
	scan();
	return result;
}
