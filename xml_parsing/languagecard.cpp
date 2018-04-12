#include "languagecard.h"



languagecard::languagecard()
{
	m_wordcards = std::make_shared<std::unordered_map<std::string, wordcard*>>();
}


languagecard::~languagecard()
{
}
