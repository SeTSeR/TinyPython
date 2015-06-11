#include "parserglobal.h"

int ElseStatement::parse()
{
	scan();
	Block* block = new Block(executeelse&&(ElseStatement::mode));
//	std::cout << "From elsestatement ";
	block->parse();
	delete block;
	return 0;
}
