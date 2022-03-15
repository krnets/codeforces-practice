#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln '\n'
#define sp ' '
typedef long long ll;

void solve()
{
	int n;
	cin >> n;
	vector<ll> vec(n);

	for (ll& x : vec)
		cin >> x;

	ll zeros = 0, neg = 0, steps = 0;

	for (int i = 0; i < n; ++i)
	{
		if (vec[i] == 0)
			++zeros;

		else if (vec[i] > 0)
			steps += (vec[i] - 1);
		else
		{
			++neg;
			steps += (-vec[i] - 1);
		}
	}

	if (neg % 2 == 0)
		steps += zeros;
	else
	{
		if (zeros > 0)
			steps += zeros;
		else
			steps += 2;
	}

	cout << steps;
}

int main()
{
	FIO;
	solve();
	return 0;
}
