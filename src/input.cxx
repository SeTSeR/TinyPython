#include <fstream>
#include <stdexcept>

#include "global.h"

const int keywordscount = 7;

int programcounter = 0;
char Look = ' ';
char Token1 = ' ';
std::string Value = "";
std::string* program;
std::ifstream filep;
std::istream* pcin = &std::cin;
int isStopped = 0;
Token* tokens[keywordscount] = {new Keyword('i', "if"), new Keyword('e', "else"), new Keyword('w', "while"), new Keyword('d', "do"), new Keyword('p', "program"), new Keyword('?', "input"), new Keyword('!', "print")};

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

int mark()
{
	return programcounter;
}

void switchpointer(int pos)
{
	programcounter = pos;
	scan();
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
