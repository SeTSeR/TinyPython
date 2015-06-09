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

class Keyword : public Token
{
	public:
		Keyword(char a, std::string b) : Token(a, b)
		{
		}
		Keyword* scan();
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

class Block: public NonTerminal
{
	public:
		Block(): NonTerminal::NonTerminal()
		{
		}
		int parse();
};

extern int programcounter;
extern char Look;
extern char Token1;
extern Token* tokens[];
extern int keywordscount;
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
