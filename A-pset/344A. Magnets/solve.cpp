#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n, last;
	cin >> n >> last;
	int ans = 1;

	while (--n)
	{
		int x;
		cin >> x;

		if (x != last)
			++ans;

		last = x;
	}
	cout << ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
