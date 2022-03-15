#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

void solve()
{
	int k, n, w;
	cin >> k >> n >> w;

	int ans = k * (w * (w + 1) / 2) - n;

	cout << (ans < 0 ? 0 : ans);
}

int main()
{
	FIO;
	solve();
	return 0;
}
