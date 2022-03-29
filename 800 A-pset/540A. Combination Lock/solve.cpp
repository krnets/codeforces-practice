#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int disks;
	cin >> disks;
	string current_state, combination;
	cin >> current_state >> combination;
	int ans = 0;

	for (int i = 0; i < disks; i++)
	{
		int x = current_state[i];
		int y = combination[i];

		ans += min(abs(x - y), 10 - abs(x - y));
	}

	cout << ans;
}

int main()
{
	FIO;
	solve();
}
