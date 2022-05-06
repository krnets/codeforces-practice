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

	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '.')
		{
			cout << 0;
		}
		else if (i + 1 < s.length())
		{
			string sub = s.substr(i, 2);

			if (sub == "-.")
				cout << 1;
			else if (sub == "--")
				cout << 2;

			++i;
		}
	}
}

int main()
{
	FIO;
	solve();
}
