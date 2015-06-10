#include "parserglobal.h"

int PrintStatement::parse()
{
//	std::cout << "Called printstatement" << std::endl;
	scan();
	if(mode)
	{
		Expression* expr = new Expression();
		int result = expr->parse();
//		std::cout << "Returned in printstatement" << std::endl;
		std::cout << result << std::endl;
		delete expr;
	}
	return 0;
}
