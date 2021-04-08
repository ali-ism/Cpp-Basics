#ifndef WORDCOUNT_PHRASE_H
#define WORDCOUNT_PHRASE_H

#include <iostream>
#include <utility>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
#include <cctype>

class Phrase
{
private:
    std::string ph{};
public:
    Phrase() { ph = ""; }
    explicit Phrase(std::string str) : ph(std::move(str)) {};
    ~Phrase() = default;
    void input_phrase();
    int word_count();
    std::vector<std::string> phrase_split();
    std::map<std::string,int> word_frequency();
};

#endif //WORDCOUNT_PHRASE_H
