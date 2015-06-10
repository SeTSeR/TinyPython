#include "parserglobal.h"

int Assignment::parse()
{
	std::cout << "Called assignment" << std::endl;
	if(Token1!='x') expected("Variable");
	std::string name = Value;
	scan();
	scan();
	Expression* expr = new Expression();
	int result = expr->parse();
	std::cout << "Returned in assignment" << std::endl;
	delete expr;
	storevar(name, result);
	return readvar(name);
}
