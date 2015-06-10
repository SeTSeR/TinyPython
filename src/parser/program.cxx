#include "parserglobal.h"

int Program::parse()
{
//	std::cout << Token1 << std::endl;
	if(Token1!='p') expected("Program");
	scan();
	if(Token1!='x') expected("Program name");
	scan();
	Block* block = new Block(1);
	block->parse();
	return 0;
}
