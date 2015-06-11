#include "parserglobal.h"

int Block::parse()
{
//	std::cout << "Called block" << std::endl;
	if(Token1!='{') expected("{");
	scan();
	while(Token1!='}')
	{
		if(Token1=='x')
		{
			int temp = readvar(Value);
			std::string name = Value;
			Assignment* expr = new Assignment();
			expr->parse();
			delete expr;
			if(!mode) storevar(name,temp);
		}
		else if(Token1=='i')
		{
			IfStatement* ifstat = new IfStatement(mode);
			ifstat->parse();
//			std::cout << "Returned in block1" << std::endl;
			delete ifstat;
			if(Token1=='e')
			{
				ElseStatement* elsestat = new ElseStatement(mode);
				elsestat->parse();
//				std::cout << "Returned in block2" << std::endl;
				delete elsestat;
			}
		}
		else if(Token1=='e')
		{
			error("Unexpected else without if");
		}
		else if(Token1=='w')
		{
			WhileStatement* whilestat = new WhileStatement(Block::mode);
			whilestat->parse();
			delete whilestat;
		}
		else if(Token1=='?')
		{
			InputStatement* instat = new InputStatement(Block::mode);
			instat->parse();
			delete instat;
		}
		else if(Token1=='!')
		{
			PrintStatement* printstat = new PrintStatement(Block::mode);
			printstat->parse();
//			std::cout << "Returned in block" << std::endl;
			delete printstat;
		}
		if(Token1==';') scan();
	}
	if(Token1!='}') expected("}");
	scan();
	return 0;
}
