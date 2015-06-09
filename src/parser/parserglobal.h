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
};*/

class Relation: public NonTerminal
{
	public:
		Relation(): NonTerminal::NonTerminal()
		{
		}
		int parse();
};

class Assignment: public NonTerminal
{
	public:
		Assignment(): NonTerminal::NonTerminal()
		{
		}
		int parse();
};

class Expression: public NonTerminal
{
	public:
		Expression(): NonTerminal::NonTerminal()
		{
		}
		int parse();
};

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

class IfStatement: public NonTerminal
{
	public:
		IfStatement(): NonTerminal::NonTerminal()
		{
		}
		int parse();
};

class ElseStatement: public NonTerminal
{
	public:
		ElseStatement(): NonTerminal::NonTerminal()
		{
		}
		int parse();
};

extern int executeelse;
int toint(std::string);
void skipblock();
#endif
