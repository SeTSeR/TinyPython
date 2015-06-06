#include "scannerglobal.h"

scanner::Token::Token(char a, std::string b)
{
	Token::token = a;
	Token::value = b;
}
