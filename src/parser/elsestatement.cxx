#include "parserglobal.h"

int ElseStatement::parse()
{
	scan();
	Block* block = new Block(executeelse&&(ElseStatement::mode));
	block->parse();
	delete block;
	return 0;
}
