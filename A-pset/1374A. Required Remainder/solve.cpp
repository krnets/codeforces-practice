#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(int x, int y, int n)
{
	int r = n / x;
	int ans = r * x + y;

	if (ans > n)
		ans = (r - 1) * x + y;

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
		int x, y, n;
		cin >> x >> y >> n;
		res.push_back(solve(x, y, n));
	}

	for (int x : res)
		cout << ln << x;
}
