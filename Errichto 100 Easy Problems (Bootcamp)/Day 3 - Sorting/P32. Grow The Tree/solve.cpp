#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define sp ' '
#define ln '\n'
#define ll unsigned long long

using namespace std;

void solve()
{
	ll n;
	cin >> n;
	vector<ll> vec(n);

	for (auto& x : vec)
		cin >> x;

	sort(vec.begin(), vec.end());

	ll sum1 = accumulate(vec.begin(), vec.begin() + n / 2, 0);
	ll sum2 = accumulate(vec.begin() + n / 2, vec.end(), 0);

	cout << sum1 * sum1 + sum2 * sum2 << ln;
}

int main()
{
	FIO;
	solve();
	return 0;
}
