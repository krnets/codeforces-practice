#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

ll minMoves(ll a, ll b)
{
	if (a % b == 0)
		return 0;

	if (a < b)
		return b - a;

	return b - (a % b);
}

int main()
{
	FIO;
	int t;
	cin >> t;

	while (t--)
	{
		ll a, b;
		cin >> a >> b;
		cout << minMoves(a, b) << ln;
	}

	return 0;
}
