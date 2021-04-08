#include "Phrase.h"

using namespace std;

int main() {
    Phrase p;
    p.input_phrase();
    cout << "Word count: " << p.word_count() << endl;
    vector<string> words = p.phrase_split();
    for(const auto& word : words)
        cout << word << endl;
    map<string,int> word_freq = p.word_frequency();
    for(const auto& elem : word_freq)
        cout << elem.first << " -> " << elem.second << endl;
    return 0;
}