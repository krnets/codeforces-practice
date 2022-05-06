#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(int n)
{
	int ans = 0;

	for (ll pw = 1; pw <= n; pw = pw * 10 + 1)
	{
		for (int d = 1; d <= 9; ++d)
		{
			if (pw * d <= n)
				++ans;
		}
	}

	return ans;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<int> res;

	while (t--)
	{
		int n;
		cin >> n;
		res.push_back(solve(n));
	}

	for (auto& x : res)
		cout << x << ln;
}
