#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln '\n'

void solve()
{
	string s;
	cin >> s;
	int len = s.length();

	if (len > 1 && s.substr(0, len / 2) == s.substr(len / 2))
	{
		cout << "YES" << ln;
	}
	else cout << "NO" << ln;
}

int main()
{
	FIO;
	int n;
	cin >> n;

	while (n--)
		solve();

	return 0;
}
