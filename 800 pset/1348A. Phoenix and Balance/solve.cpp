#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

ll solve(ll n)
{
	ll sum_a = pow(2, n);
	ll sum_b = 0;
	ll half = n / 2;

	for (int i = 1; i < half; ++i) sum_a += pow(2, i);
	for (int i = half; i < n; ++i) sum_b += pow(2, i);

	return sum_a - sum_b;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<ll> res;

	while (t--)
	{
		ll n;
		cin >> n;
		res.push_back(solve(n));
	}

	for (auto& x : res)
		cout << x << ln;
}
