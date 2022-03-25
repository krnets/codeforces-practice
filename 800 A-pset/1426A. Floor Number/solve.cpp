#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(int n, int x)
{
	if (n <= 2)
		return 1;

	int ans = (n - 3) / x + 2;

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
		int n, x;
		cin >> n >> x;
		res.push_back(solve(n, x));
	}

	for (auto x : res)
		cout << x << ln;
}
