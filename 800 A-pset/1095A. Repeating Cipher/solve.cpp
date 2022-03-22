#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int i = 0;
	int j = 0;

	while (i < n)
	{
		cout << s[i];
		++j;
		i += j;
	}
}

int main()
{
	FIO;
	solve();
}
