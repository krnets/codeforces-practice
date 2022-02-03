#include <iostream>
#include <vector>

using namespace std;
#define ln '\n';
#define sp ' ';

void solve()
{
	int n;
	cin >> n;
	vector<int> vec;

	while (n--)
	{
		int x;
		cin >> x;
		vec.push_back(x);
	}

	auto it = vec.rbegin();

	while (it != vec.rend())
	{
		cout << *it << sp;
		++it;
	}
}

int main()
{
	solve();
}
