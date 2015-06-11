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

class Block: public NonTerminal
{
	public:
		Block(): NonTerminal::NonTerminal()
		{
		}
		Block(int a): NonTerminal::NonTerminal()
		{
			Block::mode = a;
		}
		int parse();
	private:
		int mode;
};

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
		IfStatement(int a): NonTerminal::NonTerminal()
		{
			IfStatement::mode = a;
		}
		int parse();
	private:
		int mode;
};

class ElseStatement: public NonTerminal
{
	public:
		ElseStatement(): NonTerminal::NonTerminal()
		{
		}
		ElseStatement(int a): NonTerminal::NonTerminal()
		{
			ElseStatement::mode = a;
		}
		int parse();
	private:
		int mode;
};

class WhileStatement: public NonTerminal
{
	public:
		WhileStatement(): NonTerminal::NonTerminal()
		{
		}
		WhileStatement(int a): NonTerminal::NonTerminal()
		{
			WhileStatement::mode = a;
		}
		int parse();
	private:
		int mode;
};

class DoWhileStatement: public NonTerminal
{
	public:
		DoWhileStatement(): NonTerminal::NonTerminal()
		{
		}
		DoWhileStatement(int a): NonTerminal::NonTerminal()
		{
			DoWhileStatement::mode = a;
		}
		int parse();
	private:
		int mode;
};

class PrintStatement: public NonTerminal
{
	public:
		PrintStatement(): NonTerminal::NonTerminal()
		{
		}
		PrintStatement(int a): NonTerminal::NonTerminal()
		{
			PrintStatement::mode = a;
		}
		int parse();
	private:
		int mode;
};

class InputStatement: public NonTerminal
{
	public:
		InputStatement(): NonTerminal::NonTerminal()
		{
		}
		InputStatement(int a): NonTerminal::NonTerminal()
		{
			InputStatement::mode = a;
		}
		int parse();
	private:
		int mode;
};

extern int executeelse;
int toint(std::string);
void skipblock();
#endif
