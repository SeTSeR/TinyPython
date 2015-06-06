#ifndef globalh
#define globalh
#include <iostream>

extern int programcounter;
extern char Look;

void init(int mode, std::string filename);
char mygetchar();
void error(std::string error);
void expected(std::string expected);
#endif
