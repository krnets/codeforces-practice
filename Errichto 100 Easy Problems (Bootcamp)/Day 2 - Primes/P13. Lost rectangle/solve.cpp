#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

void solve()
{
	ll n, ans = LLONG_MAX;
	cin >> n;

	for (ll i = 1; i <= sqrt(n); ++i)
		if (n % i == 0)
			ans = min(i + (n / i), ans);

	cout << 2 * ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
