#include "parserglobal.h"

int ElseStatement::parse()
{
	scan();
	Block* block = new Block();
	if(executeelse) block->parse();
	else skipblock();
	return 0;
}
