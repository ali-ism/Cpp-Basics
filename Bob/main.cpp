#include <iostream>
#include <string>

using namespace std;

bool is_question(const string& prompt)
{
    if(prompt.back() != '?')
        return false;
    for(int i = 1; i < prompt.length() - 1; i++)
    {
        if(! (islower(prompt[i]) || isspace(prompt[i]) || ispunct(prompt[i])))
            return false;
    }
    return true;
}

bool is_yell_question(const string& prompt)
{
    if(prompt.back() != '?')
        return false;
    for(int i = 0; i < prompt.length() - 1; i++)
    {
        if(! (isupper(prompt[i]) || isspace(prompt[i]) || ispunct(prompt[i])))
            return false;
    }
    return true;
}

bool is_yell(const string& prompt)
{
    if(prompt.back() == '?')
        return false;
    for(int i = 0; i < prompt.length(); i++)
    {
        if(! (isupper(prompt[i]) || isspace(prompt[i]) || ispunct(prompt[i])))
            return false;
    }
    return true;
}

bool is_nothing(const string& prompt)
{
    if(prompt == " " || prompt == "...")
        return true;
    else
        return false;
}

void generate_answer(const string& prompt)
{
    if(is_nothing(prompt))
        cout << "Bob: Fine. Be that way!" << endl;
    else if(is_question(prompt))
        cout << "Bob: Sure." << endl;
    else if(is_yell_question(prompt))
        cout << "Bob: Calm down, I know what I'm doing!" << endl;
    else if(is_yell(prompt))
        cout << "Bob: Whoa, chill out!" << endl;
    else
        cout << "Bob: Whatever." << endl;
}

int main() {
    string prompt;
    do
    {
        cout << "Me: " << flush;
        getline(cin,prompt);
        generate_answer(prompt);
    }while(prompt != "0");
    return 0;
}