#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

void solve()
{
	ll n, lucky = 0;
	cin >> n;

	while (n > 0)
	{
		if (n % 10 == 4 || n % 10 == 7)
			++lucky;

		n /= 10;
	}
	cout << (lucky == 4 || lucky == 7 ? "YES" : "NO");
}

int main()
{
	FIO;
	solve();
	return 0;
}
