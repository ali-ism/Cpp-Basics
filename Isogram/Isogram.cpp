#include <iostream>
#include <string>

using namespace std;

bool word_or_phrase(const string& a)
{
	for (int i = 0; i < a.length(); i++)
	{
		if (isspace(a[i]))
		{
			return false; //means phrase
		}
	}
	return true; //means word
}

bool check_isogram(const string& a)
{
	for (int i = 0; i < a.length(); i++)
	{
		char ch = a[i];
		if (!isspace(a[i]) && !ispunct(a[i]))
		{
			for (int j = i + 1; j < a.length(); j++)
			{
				if (ch == a[j])
					return false;
			}
		}
	}
	return true;
}

int main()
{
	string a;
	cout << "Enter word or phrase: " << flush;
	getline(cin, a);
	if (check_isogram(a))
		cout << "Isogram" << endl;
	else
		cout << "Not an Isogram" << endl;
}