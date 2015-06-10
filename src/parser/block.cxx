#include "parserglobal.h"

int Block::parse()
{
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
			storevar(name, temp);
		}
		else if(Token1=='i')
		{
			IfStatement* ifstat = new IfStatement(mode);
			ifstat->parse();
			delete ifstat;
			if(Token1=='e')
			{
				ElseStatement* elsestat = new ElseStatement(mode);
				elsestat->parse();
				delete elsestat;
			}
		}
		else if(Token1=='e')
		{
			error("Unexpected else without if statement");
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
			delete printstat;
		}
		if(Token1==';') scan();
	}
	if(Token1!='}') expected("}");
	scan();
	return 0;
}
