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

	int ans = (n * m + 1) / 2;

	cout << ans << ln;
}

int main()
{
	FIO;
	int t;
	cin >> t;

	while (t--)
		solve();
}
