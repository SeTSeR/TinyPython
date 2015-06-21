#include "parserglobal.h"

int Expression::parse()
{
	int result = 0;
//	std::cout << "Called expression" << std::endl;
	Term* term = new Term();
	result = term->parse();
//	std::cout << "Returned in expression" << std::endl;
	while((Token1=='+')||(Token1=='-')||(Token1=='|')||(Token1=='^'))
	{
		switch(Token1)
		{
			case '+':
				scan();
				result+=term->parse();
				break;
			case '-':
				scan();
				result-=term->parse();
				break;
			case '|':
				scan();
				result|=term->parse();
				break;
			case '^':
				scan();
				result^=term->parse();
		}
	}
	delete term;
	return result;
}
