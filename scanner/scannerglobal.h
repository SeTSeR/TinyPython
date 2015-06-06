#ifndef scannerglobalh
#define scannerglobalh
#include "../global.h"

std::string tostring(int val);
int isDigit(char c);
int isAlpha(char c);
int isAlNum(char c);
int isOp(char c);
int inArray(char c, char* arr);

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

class Number : public Token
{
        public:
		Number(int b) : Token('n', tostring(b)){}
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

#endif
