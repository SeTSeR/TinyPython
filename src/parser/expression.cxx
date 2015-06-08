#include "parserglobal.h"

int Expression::parse()
{
	int result = 0;
	Term* term = new Term();
	result = term->parse();
	while((Token1=='+')||(Token1=='-'))
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
		}
	}
	return result;
}
