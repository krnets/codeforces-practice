#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

void solve()
{
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;

	while (t--)
	{
		for (int i = 0; i < n - 1; ++i)
		{
			if (s[i] == 'B' && s[i + 1] == 'G')
			{
				s[i] = 'G';
				s[i + 1] = 'B';
				++i;
			}
		}
	}
	cout << s;
}

int main()
{
	FIO;
	solve();
	return 0;
}
