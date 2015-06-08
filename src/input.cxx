#include <fstream>
#include <exception>

#include "global.h"

int programcounter = 0;
char Look = ' ';
char Token1 = ' ';
std::string Value = "";
std::string program = "";
std::ifstream filep;
std::istream* pcin = &std::cin;

char mygetchar()
{
	char result = '.';
	try
	{
		result = program[programcounter++];
	}
	catch(std::exception& e)
	{
	}
	return result;
}

void init(int mode, std::string filename)
{
	if(mode==0)
	{
		*pcin >> program;
		Look = mygetchar();
		scan();
	}
	else if(mode==1)
	{
		filep.open(filename.c_str());
		pcin = &filep;
		*pcin >> program;
		Look = mygetchar();
		scan();
	}
}
