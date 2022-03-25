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
	vector vec(n + 1, vector<int>(n + 1));

	vec[1][0] = 1;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			vec[i][j] = vec[i - 1][j] + vec[i][j - 1];
		}
	}

	cout << vec[n][n];
}

int main()
{
	FIO;
	solve();
}
