#include "ArrayCompare.h"

using namespace std;

int main()
{
	int a[5], b[5];
	cout << "Enter Array 1: " << flush;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	cout << endl << "Enter Array 2: " << flush;
	for (int i = 0; i < 5; i++)
	{
		cin >> b[i];
	}
	bool flag = true;
	for (int i = 0; i < 5; i++)
	{
		if (a[i] != b[i])
		{
			flag = false;
			cout << "No" << endl;
			break;
		}
	}
	if (flag)
	{
		cout << "Yes" << endl;
	}
	return 0;
}
