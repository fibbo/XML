#pragma once
#include <unordered_map>
#include <memory.h>

#include "wordcard.h"
 
class languagecard
{
public:
	languagecard();
	~languagecard();

private:
	std::unordered_map<std::string, std::string> m_cases;
	
};

