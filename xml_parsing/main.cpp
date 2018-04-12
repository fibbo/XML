#include "xml_parser.h"
#include <fstream>
#include <cstdlib>

int main(int argc, char** argv)
{
	xml_parser parse;

	parse.load("test.xml");
}