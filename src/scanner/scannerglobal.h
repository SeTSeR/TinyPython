#ifndef scannerglobalh
#define scannerglobalh
#include "../global.h"

std::string tostring(int val);
int isDigit(char c);
int isAlpha(char c);
int isAlNum(char c);
int isOp(char c);
int isWhite(char c);
int inArray(char c, char* arr);

class Number : public Token
{
        public:
		Number(std::string b) : Token('n', b){}
		Number* scan();
};

class Identifier : public Token
{
        public:
		Identifier(std::string b) : Token('x', b){}
		Identifier* scan();
};

class Operator : public Token
{
        public:
		Operator(char x, std::string b) : Token(x, b){}
		Operator* scan();
};

class White : public Token
{
	public:
		White(char x, std::string b) : Token(x, b){}
		White* scan();
};

#endif
