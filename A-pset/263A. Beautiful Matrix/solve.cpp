#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln '\n'

void solve()
{
	int n = 5;
	int x_pos = 0, y_pos = 0;
	int val;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			cin >> val;

			if (val == 1)
			{
				x_pos = j;
				y_pos = i;
			}
		}
	}
	int res = abs(3 - x_pos) + abs(3 - y_pos);

	cout << res;
}

int main()
{
	FIO;
	solve();
	return 0;
}
