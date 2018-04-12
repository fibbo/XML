#pragma once
#include <unordered_map>
#include <memory>
class wordcard
{
public:
	wordcard();
	~wordcard();

private:
	std::shared_ptr< std::unordered_map<std::string, std::shared_ptr<wordcard>> > m_wordcards;
};

