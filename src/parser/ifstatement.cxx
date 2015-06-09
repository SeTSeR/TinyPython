#include "parserglobal.h"

int IfStatement::parse()
{
	scan();
	if(Token1!='(') expected("(");
	int result;
	Relation* rel = new Relation();
	result = rel->parse();
	if(Token1!=')') expected(")");
	if(result)
	{
		Block* block = new Block();
		block->parse();
		executeelse = 0;
	}
	else
	{
		skipblock();
		executeelse = 1;
	}
	return 0;
}
