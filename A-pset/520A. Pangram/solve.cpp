#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

void solve()
{
	string r;
	getline(cin, r);
	int n = stoi(r);
	string s;
	getline(cin, s);
	transform(all(s), s.begin(), [](char c) { return tolower(c); });
	set<char> set(all(s));
	cout << (set.size() == 26 ? "YES" : "NO");
}

int main()
{
	FIO;
	solve();
	return 0;
}
