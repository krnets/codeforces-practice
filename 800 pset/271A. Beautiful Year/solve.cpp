#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int year;
	cin >> year;
	set<int> set;

	while (set.size() != 4)
	{
		++year;
		set.clear();

		int temp = year;

		while (temp > 0)
		{
			set.insert(temp % 10);
			temp /= 10;
		}
	}

	cout << year;
}

int main()
{
	FIO;
	solve();
	return 0;
}
