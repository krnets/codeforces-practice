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
	vector<int> vec(n);

	for (int& x : vec)
		cin >> x;

	int last = vec.front();
	int mx = 1;
	int ans = mx;

	for (int i = 1; i < n; i++)
	{
		if (vec[i] > last)
			++mx;
		else mx = 1;

		ans = max(ans, mx);
		last = vec[i];
	}
	cout << ans;
}

int main()
{
	FIO;
	solve();
}
