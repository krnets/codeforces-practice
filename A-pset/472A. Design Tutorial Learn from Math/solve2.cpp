#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

bool is_composite(int n)
{
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			return true;
		}
	}
	return false;
}

void solve()
{
	int n;
	cin >> n;

	int x = n / 2;
	int y = n - x;

	while (!(is_composite(x) && is_composite(y) && x + y == n))
	{
		++x; --y;
	}
	cout << x << sp << y << ln;
}

int main()
{
	FIO;
	solve();
	return 0;
}
