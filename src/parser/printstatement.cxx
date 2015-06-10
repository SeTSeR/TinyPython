#include "parserglobal.h"

int PrintStatement::parse()
{
	scan();
	if(mode)
	{
		Expression* expr = new Expression();
		std::cout << expr->parse() << std::endl;
		delete expr;
	}
	scan();
	return 0;
}
