#include <iostream>
#include <exception>
#include <string>

#include "global.h"

void error(std::string error)
{
	std::cerr << "ERROR: " << error << std::endl;
	std::terminate();
}

void expected(std::string expected)
{
	error(expected+" expected.");
}
