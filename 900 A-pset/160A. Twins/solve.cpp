#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) begin(x), end(x)

void solve()
{
	int n;
	cin >> n;
	vector<int> coins(n);

	for (int& x : coins)
		cin >> x;

	sort(all(coins), greater());

	int sum = accumulate(all(coins), 0);
	int half = sum / 2;
	int my_sum = 0;
	int ans = 0;

	for (int coin : coins)
	{
		my_sum += coin;
		++ans;

		if (my_sum > half)
			break;
	}

	cout << ans;
}

int main()
{
	FIO;
	solve();
}
