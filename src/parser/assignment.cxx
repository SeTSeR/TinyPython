#include "parserglobal.h"

int Assignment::parse()
{
	if(Token1!='x') expected("Variable");
	std::string name = Value;
	scan();
	scan();
	Expression* expr = new Expression();
	int result = expr->parse();
	storevar(name, result);
	return 0;
}
