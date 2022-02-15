#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> vec(n);

	for (int i = 0; i < n; ++i)
		cin >> vec[i];

	int mn = INT_MAX;
	int idx_mn = 0;

	for (int i = 0; i < n; ++i)
	{
		if (vec[i] < mn)
		{
			mn = vec[i];
			idx_mn = i;
		}
	}

	cout << idx_mn;
}

int main()
{
	FIO;
	solve();
	return 0;
}
