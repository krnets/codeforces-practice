#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int shovel_price, coin_denomination;
	cin >> shovel_price >> coin_denomination;

	for (int i = 1; i < 10; ++i)
	{
		int change = (shovel_price * i) % 10;

		if (change == 0 || change == coin_denomination)
		{
			cout << i;
			return;
		}
	}
}

int main()
{
	FIO;
	solve();
	return 0;
}
