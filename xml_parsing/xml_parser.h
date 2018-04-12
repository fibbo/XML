#pragma once

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/foreach.hpp>
#include <string>
#include <set>
#include <exception>
#include <iostream>
namespace pt = boost::property_tree;

class xml_parser
{
public:
	xml_parser();
	~xml_parser();

	void load(const std::string& filename);
	void save(const std::string& filename);

private:
	std::string languageA;
	std::string languageB;
};

