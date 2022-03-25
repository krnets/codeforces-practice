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

	for (int i = 1; i <= n / 2; ++i)
		if (n % i == 0)
			++ans;

	cout << ans;
}

int main()
{
	FIO;
	solve();
}
