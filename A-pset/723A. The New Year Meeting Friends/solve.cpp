#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n = 3;
	int mn = INT_MAX;
	int mx = INT_MIN;

	while (n--)
	{
		int x;
		cin >> x;

		mn = min(mn, x);
		mx = max(mx, x);
	}

	cout << mx - mn;
}

int main()
{
	FIO;
	solve();
	return 0;
}
