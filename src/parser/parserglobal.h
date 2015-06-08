#ifndef parserglobalh
#define parserglobalh
#include "../global.h"
/*class NonTerminal
{
	public:
		NonTerminal();
		virtual int parse()
		{
			return 0;
		}
};

class Expression: public NonTerminal
{
	public:
		Expression(): NonTerminal::NonTerminal()
		{
		}
		int parse();
};*/

class Term: public NonTerminal
{
	public:
		Term(): NonTerminal::NonTerminal()
		{
		}
		int parse();
};

class Factor: public NonTerminal
{
	public:
		Factor(): NonTerminal::NonTerminal()
		{
		}
		int parse();
};

int toint(std::string);
#endif
