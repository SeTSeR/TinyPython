#include "parserglobal.h"

int Relation::parse()
{
//	std::cout << "Called relation" << std::endl;
	Expression* expr = new Expression();
	int arg1 = expr->parse();
//	std::cout << "Returned in relation" << std::endl;
	int result = arg1;
	switch(Token1)
	{
		case '>':
//			std::cout << "Branch 1" << std::endl;
//			std::cout << Value << std::endl;
			if(Value==">")
			{
//				std::cout << "GNE" << std::endl;
				scan();
//				std::cout << "Normal" << std::endl;
				int arg2;
				arg2 = expr->parse();
//				std::cout << arg2 << std::endl;
				result = (arg1>arg2);
//				std::cout << result << std::endl;
			}
			else if(Value==">=")
			{
				scan();
				result = (arg1>=(expr->parse()));
			}
			break;
		case '<':
			if(Value=="<")
			{
				scan();
				result = (arg1<(expr->parse()));
			}
			else if(Value=="<=")
			{
				scan();
				result = (arg1<=(expr->parse()));
			}
			else if(Value=="<>")
			{
				scan();
				result = (arg1<=(expr->parse()));
			}
			break;
		case '=':
			if(Value=="==")
			{
				scan();
				result = (arg1==(expr->parse()));
			}
			break;
	}
	delete expr;
	return result;
}
