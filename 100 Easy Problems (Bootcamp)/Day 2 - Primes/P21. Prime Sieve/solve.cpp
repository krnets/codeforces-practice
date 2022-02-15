#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	const ll first = 2;
	ll n, prime_counter = 0;
	cin >> n;
	vector<bool> sieve(n + 1, true);

	for (ll i = first; i <= sqrt(n); ++i)
		if (sieve[i])
			for (int j = i * i; j <= n; j += i)
				sieve[j] = false;

	for (ll i = first; i <= n; ++i)
		if (sieve[i])
			++prime_counter;

	cout << prime_counter << ln;

	for (ll i = first; i <= n; ++i)
		if (sieve[i])
			cout << i << sp;
}

int main()
{
	FIO;
	solve();
	return 0;
}
