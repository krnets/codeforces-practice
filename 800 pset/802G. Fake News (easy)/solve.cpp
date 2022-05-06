#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	string s;
	cin >> s;
	const string p = "heidi";
	int pos = 0;

	for (char c : s)
		if (c == p[pos])
			++pos;

	cout << (pos == p.length() ? "YES" : "NO");
}

int main()
{
	FIO;
	solve();
}
