#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

void solve()
{
	string s;
	cin >> s;
	set<char> set(all(s));
	cout << (set.size() & 1 ? "IGNORE HIM!" : "CHAT WITH HER!");
}

int main()
{
	FIO;
	solve();
	return 0;
}
