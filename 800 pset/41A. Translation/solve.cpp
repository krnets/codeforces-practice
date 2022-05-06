#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

void solve()
{
	string s, t;
	cin >> s >> t;
	reverse(all(t));
	cout << (s == t ? "YES" : "NO");
}

int main()
{
	FIO;
	solve();
	return 0;
}
