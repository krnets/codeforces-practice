#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	ll n;
	cin >> n;

	ll ans = 0;

	if (n & 1)
		ans = (n - 1) / 2 - n;
	else
		ans = n / 2;

	cout << ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
