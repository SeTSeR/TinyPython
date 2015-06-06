#ifndef scannerglobalh
#define scannerglobalh
#include "../global.h"
namespace scanner
{
	class Token;
	class Number;
	int isDigit(char c);
}

class scanner::Token
{
        public:
	                Token(char, std::string);
			char token;
			std::string value;
			scanner::Token* scan();
};

class scanner::Number : public scanner::Token
{
        public:
		Number(char a, std::string b) : scanner::Token(a, b){}
		scanner::Number* scan();
};
#endif
