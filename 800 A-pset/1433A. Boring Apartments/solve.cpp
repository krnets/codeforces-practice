#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(int n)
{
	if (n == 1)
		return 1;

	int digits = ceil(log10(n));
	int sum = digits * (digits + 1) / 2;
	int ans = 10 * (n % 10 - 1) + sum;

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
		int x;
		cin >> x;
		res.push_back(solve(x));
	}

	for (auto x : res)
		cout << x << ln;
}
