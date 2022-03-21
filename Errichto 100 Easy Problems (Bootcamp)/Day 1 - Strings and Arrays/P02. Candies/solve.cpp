#include <iostream>
#include <vector>

using namespace std;
#define ln '\n';
#define sp ' ';

void solve()
{
	int n, from, to, sum = 0;
	cin >> n;
	vector<int> vec;

	while (n--)
	{
		int x;
		cin >> x;
		vec.push_back(x);
	}

	cin >> from;
	cin >> to;

	for (int i = from; i <= to; ++i)
	{
		sum += vec[i];
	}

	cout << sum;
}

int main()
{
	solve();
}
