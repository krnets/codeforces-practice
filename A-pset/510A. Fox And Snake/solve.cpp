#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n, m;
	cin >> n >> m;
	bool flag = false;

	for (int r = 0; r < n; ++r)
	{
		if (r % 2 == 0)
			cout << string(m, '#') << ln;
		else
		{
			if (flag)
			{
				cout << '#';
				cout << string(m - 1, '.') << ln;
			}
			else
			{
				cout << string(m - 1, '.');
				cout << '#' << ln;
			}
			flag = !flag;
		}
	}
}

int main()
{
	FIO;
	solve();
	return 0;
}
