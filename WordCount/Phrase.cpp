#include "Phrase.h"

void Phrase::input_phrase() {
    std::cout << "Enter phrase: " << std::flush;
    getline(std::cin,ph);
}

int Phrase::word_count() {
    if(ph.empty())
        input_phrase();
    std::string word;
    std::stringstream ss(ph);
    int count = 0;
    while(ss >> word)
        count++;
    return count;
}

std::vector<std::string> Phrase::phrase_split() {
    std::vector<std::string> words;
    std::stringstream ss(ph);
    std::string word;
    while(ss >> word)
    {
        word.erase(std::remove_if (word.begin (), word.end (), ispunct), word.end ());
        words.push_back(word);
    }
    words.shrink_to_fit();
    return words;
}

std::map<std::string,int> Phrase::word_frequency() {
    std::vector<std::string> words = phrase_split();
    std::map<std::string,int> word_freq;
    for(int i = 0; i < words.size(); i++)
    {
        word_freq.insert(std::pair<std::string,int>(words[i],std::count(words.begin(),words.end(),words[i])));
    }
    return word_freq;
}