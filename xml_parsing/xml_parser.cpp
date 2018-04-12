#include "xml_parser.h"
#include <iostream>


xml_parser::xml_parser()
{
}


xml_parser::~xml_parser()
{
}

void xml_parser::load(const std::string& filename)
{
	// Create empty property tree object
	pt::ptree tree;

	// Parse the XML into the property tree.
	pt::read_xml(filename, tree);

	// Use the throwing version of get to find the debug filename.
	// If the path cannot be resolved, an exception is thrown.
	//languageA = tree.get<std::string>("VocabularyTrainer.LanguageA");
	//languageB = tree.get<std::string>("VocabularyTrainer.LanguageB");

	// Use the default-value version of get to find the debug level.
	// Note that the default value is used to deduce the target type.
	//m_level = tree.get("debug.level", 0);

	//// Use get_child to find the node containing the modules, and iterate over
	//// its children. If the path cannot be resolved, get_child throws.
	//// A C++11 for-range loop would also work.
	BOOST_FOREACH(const auto &word, tree.get_child("VocabularyTrainer.Words")) {
		// The data function is used to access the data stored in a node.
		std::cout << word.second.get<std::string>("Key");
	}
}

void xml_parser::save(const std::string& filename)
{

}
