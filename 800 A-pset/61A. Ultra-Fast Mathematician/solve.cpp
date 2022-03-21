#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	string s, t, ans;
	cin >> s >> t;

	for (int i = 0; i < s.length(); ++i)
		if (s[i] != t[i])
			ans.push_back('1');
		else
			ans.push_back('0');

	cout << ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
