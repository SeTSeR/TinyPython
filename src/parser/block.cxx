#include "parserglobal.h"

int Block::parse()
{
	if(Token1!='{') expected("{");
	scan();
	while(Token1!='.')
	{
		if(Token1=='x')
		{
			Assignment* expr = new Assignment();
			expr->parse();
		}
		else if(Token1=='i')
		{
			IfStatement* ifstat = new IfStatement();
			ifstat->parse();
			if(Token1=='e')
			{
				ElseStatement* elsestat = new ElseStatement();
				elsestat->parse();
			}
		}
		else if(Token1=='e')
		{
			error("Unexpected else without if statement");
		}
	}
	if(Token1!='}') expected("}");
	scan();
	return 0;
}
