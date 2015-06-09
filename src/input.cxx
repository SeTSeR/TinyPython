#include <fstream>
#include <exception>

#include "global.h"

int programcounter = 0;
int programsize = 256;
char Look = ' ';
char Token1 = ' ';
std::string Value = "";
//std::string program(programsize, ' ');
std::ifstream filep;
std::istream* pcin = &std::cin;
int keywordscount = 1;
Token* tokens[1] = {new Keyword('i', "if")};

/*void updatebuffer()
{
	*pcin >> program;
}*/

char mygetcharx()
{
	char result;
	*pcin >> result;
//	std::cout << result << " ";
	return result;
}

char mygetchar()
{
	char result;
	result = mygetcharx();
	if(result=='#')
	{
		while(result!='\n') result = mygetcharx();
	}
	if(result=='{')
	{
		while(result!='}') result = mygetcharx();
	}
	return result;
}

void init(int mode, std::string filename)
{
	if(mode==0)
	{
//		*pcin >> program;
//		Look = mygetchar();
		scan();
	}
	else if(mode==1)
	{
		filep.open(filename.c_str());
		pcin = &filep;
//		*pcin >> program;
		Look = mygetchar();
		scan();
	}
}
