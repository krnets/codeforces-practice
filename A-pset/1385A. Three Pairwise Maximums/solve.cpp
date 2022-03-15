#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln '\n'
#define sp ' '
#define ll long long

void solve()
{
	ll arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(begin(arr), end(arr));

	if (arr[1] != arr[2])
		cout << "NO" << ln;
	else
	{
		cout << "YES" << ln;
		cout << arr[0] << sp << arr[0] << sp << arr[2] << ln;
	}
}

int main()
{
	FIO;
	int n;
	cin >> n;

	while (n--)
		solve();

	return 0;
}
