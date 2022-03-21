#include <algorithm>
#include <iostream>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
typedef long long ll;

void solve()
{
	ll n, divisors_total = 0;
	cin >> n;

	for (ll i = 1; i <= n; ++i)
		divisors_total += n / i;

	cout << divisors_total;
}

int main()
{
	FIO;
	solve();
	return 0;
}
