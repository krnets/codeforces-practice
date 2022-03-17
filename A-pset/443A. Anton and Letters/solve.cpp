#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	string s;
	getline(cin, s);
	set<char> set;

	for (char c : s)
		if (isalpha(c))
			set.insert(c);

	cout << set.size();
}

int main()
{
	FIO;
	solve();
	return 0;
}
