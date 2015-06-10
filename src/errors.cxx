#include <iostream>
#include <exception>
#include <string>

#include "global.h"

void error(std::string error)
{
	std::cerr << "ERROR: " << error << std::endl;
	std::cerr << "Look: " << Look << std::endl;
	std::cerr << "Token: " << Token1 << std::endl;
	std::cerr << "Value: " << Value << std::endl;
	std::terminate();
}

void expected(std::string expected)
{
	error(expected+" expected.");
}
