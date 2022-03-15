#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

void solve()
{
	int n;
	cin >> n;

	string ans = "EASY";

	while (n--)
	{
		int x;
		cin >> x;

		if (x == 1)
		{
			ans = "HARD";
			break;
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
