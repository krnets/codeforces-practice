#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

void solve()
{
	int limak, bob;
	cin >> limak >> bob;

	const int growth_factor_limak = 3;
	const int growth_factor_bob = 2;
	int years = 0;

	while (limak <= bob)
	{
		limak *= growth_factor_limak;
		bob *= growth_factor_bob;
		++years;
	}

	cout << years;
}

int main()
{
	FIO;
	solve();
	return 0;
}
