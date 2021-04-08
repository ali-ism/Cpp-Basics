#include "SumSeries.h"

using namespace std;

int cum_sum(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 0)
	{
		return 0;
	}
	else
	{
		return n + cum_sum(n - 1);
	}
}

int main()
{
	cout << "Enter number: " << flush;
	int n;
	cin >> n;
	cout << "Cumulative Sum: " << cum_sum(n) << endl;
	return 0;
}
