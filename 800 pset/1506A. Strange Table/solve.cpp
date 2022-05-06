#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

ll solve(ll n, ll m, ll x)
{
	x--;

	ll row = x % n;
	ll col = x / n;
	ll ans = row * m + col + 1;

	return ans;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<ll > res;

	while (t--)
	{
		ll n, m, x;
		cin >> n >> m >> x;
		res.push_back(solve(n, m, x));
	}

	for (auto x : res)
		cout << x << ln;
}
