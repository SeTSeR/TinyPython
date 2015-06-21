#include "parserglobal.h"

int Program::parse()
{
//	std::cout << Token1 << std::endl;
//	std::cout << "Called program" << std::endl;
	if(Token1!='p') expected("Program");
	scan();
	if(Token1!='x') expected("Program name");
	scan();
	Block* block = new Block(1);
//	std::cout << "From program ";
	block->parse();
	return 0;
}
