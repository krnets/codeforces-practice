#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n, max_height;
	cin >> n >> max_height;
	int ans = 0;

	while (n--)
	{
		int friend_height;
		cin >> friend_height;

		if (friend_height > max_height)
			ans += 2;
		else ++ans;
	}

	cout << ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
