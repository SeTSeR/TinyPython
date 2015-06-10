#include "parserglobal.h"

int PrintStatement::parse()
{
//	std::cout << "Called printstatement" << std::endl;
	scan();
	Expression* expr = new Expression();
	int result = expr->parse();
//	std::cout << "Returned in printstatement" << std::endl;
	if(mode) std::cout << result << std::endl;
	delete expr;
	return 0;
}
