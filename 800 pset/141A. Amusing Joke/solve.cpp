#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	string guest, host, pile;
	cin >> guest >> host >> pile;

	map<char, int> map;
	bool ans = true;

	for (char c : guest)
		map[c]++;

	for (char c : host)
		map[c]++;

	for (char c : pile)
	{
		if (map.count(c))
			map[c]--;
		else
		{
			ans = false;
			break;
		}
	}

	for (auto [_, cnt] : map)
	{
		if (cnt != 0)
		{
			ans = false;
			break;
		}
	}

	cout << (ans ? "YES" : "NO");
}

int main()
{
	FIO;
	solve();
	return 0;
}
