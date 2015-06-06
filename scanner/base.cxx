#include "scannerglobal.h"
#include <sstream>

int isDigit(char c)
{
	return ((c>'0')&&(c<'9'));
}

int isAlpha(char c)
{
	return ((c>'a')&&(c<'z'));
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

void scanoperator()
{
	Operator* numb = new Operator('>', ">");
	numb->scan();
}
