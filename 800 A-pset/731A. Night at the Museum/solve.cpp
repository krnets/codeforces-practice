#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln '\n'
#define sp ' '
#define ll long long

void solve()
{
	string s;
	cin >> s;
	int ans = 0;
	char curr = 'a';

	for (char c : s)
	{
		int dist = abs(curr - c);
		ans += min(dist, 26 - dist);
		curr = c;
	}

	cout << ans;
}

int main()
{
	FIO;
	solve();
}
