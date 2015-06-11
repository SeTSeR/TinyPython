#include "parserglobal.h"

int IfStatement::parse()
{
	scan();
	if(Token1!='(') expected("(");
	scan();
	int result;
	Relation* rel = new Relation();
	result = rel->parse();
	if(Token1!=')') expected(")");
	scan();
	Block* block = new Block((result)&&(IfStatement::mode));
//	std::cout << "From ifstatement ";
	block->parse();
	executeelse = !result;
	delete block;
	delete rel;
	return 0;
}
