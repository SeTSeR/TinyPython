#include "parserglobal.h"

int WhileStatement::parse()
{
	int result = 0;
	scan();
	if(Token1!='(') expected("(");
	scan();
	int labelrel = mark();
	Relation* rel = new Relation();
	result = rel->parse();
	delete rel;
	if(Token1!=')') expected(")");
	int label1 = mark();
	scan();
	Block* whileblock = new Block(0);
	whileblock->parse();
	delete whileblock;
	int label2 = mark();
	while(result&&mode)
	{
		switchpointer(labelrel);
		rel = new Relation();
		result = rel->parse();
		delete rel;
		switchpointer(label1);
		whileblock = new Block(1);
		whileblock->parse();
		delete whileblock;
	}
	return 0;
}
