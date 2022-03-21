#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(vector<int>& operations)
{
	int mx = INT_MIN;
	int mn = INT_MAX;

	for (int operation : operations)
	{
		mx = max(mx, operation);
		mn = min(mn, operation);
	}

	return mx - mn;
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
		vector<int> vec(n);

		for (int& x : vec) cin >> x;

		res.push_back(solve(vec));
	}

	for (auto& x : res)
		cout << x << ln;
}
