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
	vector<int> citizen_welfare(n);
	int mx = 0;

	for (int& welfare : citizen_welfare)
	{
		cin >> welfare;
		mx = max(mx, welfare);
	}

	int ans = 0;

	for (int welfare : citizen_welfare)
	{
		ans += mx - welfare;
	}

	cout << ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
