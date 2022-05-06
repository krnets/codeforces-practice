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
	string bw = "#Black&White";
	string color = "#Color";
	bool has_color = false;

	set<char> colors{ 'C', 'M', 'Y' };

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			char c;
			cin >> c;
			if (colors.count(c))
			{
				has_color = true;
				break;
			}
		}
	}

	cout << (has_color ? color : bw);
}

int main()
{
	FIO;
	solve();
}
