#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	vector<int> denominations{100, 20, 10, 5, 1};
	int n;
	cin >> n;
	int ans = 0;

	for (int denomination : denominations)
	{
		if (n >= denomination)
		{
			int x = n / denomination;
			ans += x;
			n = n - (x * denomination);
		}
	}
	cout << ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
