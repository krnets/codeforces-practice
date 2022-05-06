#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n, k;
	cin >> n >>k;

	while(k--)
	{
		if (n % 10 == 0)
			n /= 10;
		else --n;
	}

	cout << n;
}

int main()
{
	FIO;
	solve();
	return 0;
}
