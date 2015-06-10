#include "global.h"

void printhelp()
{
	std::cout << "interpreter - run interpreter in interactive mode" << std::endl;
	std::cout << "interpreter program - run pregram from file program" << std::endl;
	std::cout << "interpreter -h(--help) - print this help" << std::endl;
}

void interpret()
{
	Program* expr = new Program();
	expr->parse();
}

void stop()
{
	isStopped = 1;
}

int main(int argc, char** argv)
{
	if(argc==1)
	{
		init(0, "None");
		interpret();
	}
	else
	{
		if((argv[1]=="-h")||(argv[1]=="--help"))
		{
			printhelp();
		}
		else
		{
			init(1, argv[1]);
			interpret();
			end();
		}
	}
}
