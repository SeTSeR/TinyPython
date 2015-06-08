#ifndef globalh
#define globalh
#include <iostream>

class Token
{
	public:
		Token(char, std::string);
		char token;
		std::string value;
		virtual	Token* scan()
		{
			return NULL;
		}
};

class NonTerminal
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
};

extern int programcounter;
extern char Look;
extern char Token1;
extern std::string Value;

void init(int mode, std::string filename);
char mygetchar();
Token* scan();
void printtoken(Token* token);
void error(std::string error);
void expected(std::string expected);
int readvar(std::string name);
void storevar(std::string name, int value);
#endif
