#include "parserglobal.h"

int DoWhileStatement::parse()
{
	int label = mark();
	scan();
	Block* block = new Block(0);
	block->parse();
	delete block;
	if(Token1!='w') expected("Condition");
	scan();
	if(Token1!='(') expected("(");
	scan();
	int labelrel = mark();
	Relation* rel = new Relation();
	int cond = rel->parse();
	delete rel;
	if(Token1==';') scan();
	do
	{
		switchpointer(label);
		block = new Block(DoWhileStatement::mode);
		block->parse();
		rel = new Relation();
		switchpointer(labelrel);
		cond = rel->parse();
	}
	while(cond&&DoWhileStatement::mode);
	return 0;
}
