#include <fstream>
#include <stdexcept>

#include "global.h"

int programcounter = 0;
char Look = ' ';
char Token1 = ' ';
std::string Value = "";
std::string* program;
std::ifstream filep;
std::istream* pcin = &std::cin;
int keywordscount = 5;
int isStopped = 0;
Token* tokens[5] = {new Keyword('i', "if"), new Keyword('e', "else"), new Keyword('p', "program"), new Keyword('?', "input"), new Keyword('!', "print")};

void updatebuffer()
{
	program = new std::string();
	while(!pcin->eof())
	{
		char result = pcin->get();
		program->push_back(result);
//		std::cout<<result;
	}
}

char mygetcharx()
{
	char result;
//	result = pcin->get();
	try
	{
		result = program->at(programcounter++);
	}
	catch (const std::out_of_range& oor)
	{
		result = -1;
	}
//	std::cout << result;
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
	return result;
}

void init(int mode, std::string filename)
{
	if(mode==0)
	{
//		*pcin >> program;
		updatebuffer();
//		Look = mygetchar();
//		std::cout << *program << std::endl;
		scan();
	}
	else if(mode==1)
	{
		filep.open(filename.c_str());
		pcin = &filep;
		updatebuffer();
//		std::cout << *program << std::endl;
//		*pcin >> program;
//		Look = mygetchar();
		scan();
	}
}

void end()
{
	pcin = &std::cin;
	filep.close();
	delete program;
}
