#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n;
	cin >> n;
	int ans = 0;

	while (n--)
	{
		int p, q;
		cin >> p >> q;

		if (p <= q - 2)
			++ans;
	}

	cout << ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
