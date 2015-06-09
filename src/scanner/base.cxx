#include "scannerglobal.h"
#include <sstream>

int isDigit(char c)
{
	return ((c>='0')&&(c<='9'));
}

int isAlpha(char c)
{
	return ((c>='a')&&(c<='z'));
}

int isAlNum(char c)
{
	return ((isDigit(c))||(isAlpha(c)));
}

int isOp(char c)
{
	char ops[11] = {'+', '-', '*', '/', '&', '|', '^', '~', '>', '<', '='};
	return inArray(c, ops);
}

int isWhite(char c)
{
	char whites[3] = {' ', '\t', '\n'};
	return inArray(c, whites);
}

int inArray(char c, char* array)
{
	int i = 0;
	int size = 11;
	while(i<size)
	{
		if(array[i]==c) return 1;
		i++;
	}
	return 0;
}

std::string tostring(int val)
{
	std::stringstream ss;
	ss << val;
	return ss.str();
}

void printtoken(Token* token)
{
	std::cout << token->token << " " << token->value << std::endl;
}

Token* scan()
{
	Token* currenttoken = new Token('0', "0");
	Token* whitetoken = new White(' ', " ");
//	std::cout << "Before white" << std::endl;
//	std::cout << Look << std::endl;
	whitetoken->scan();
//	std::cout << "After white" << std::endl;
//	std::cout << Look << std::endl;
	if(isDigit(Look))
	{
		currenttoken = new Number("0");
		currenttoken = currenttoken->scan();
	}
	else if(isAlpha(Look))
	{
		currenttoken = new Identifier("x");
		currenttoken = currenttoken->scan();
	}
	else if(isOp(Look))
	{
//		std::cout << "Beginning" << std::endl;
		currenttoken = new Operator('<', "<");
		currenttoken = currenttoken->scan();
//		std::cout << "End" << std::endl;
	}
	else
	{
		std::string s(1, Look);
		currenttoken = new Token(Look, s);
		Look = mygetchar();
	}
	Token1 = currenttoken->token;
	Value = currenttoken->value;
	return currenttoken;
}
