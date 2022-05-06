#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(vector<int>& vec)
{
	int ans = 0;
	int last = vec.front();

	for (int i = 1; i < vec.size(); i++)
	{
		int mn = min(last, vec[i]);
		int mx = max(last, vec[i]);

		while (mn * 2 < mx)
		{
			++ans;
			mn *= 2;
		}
		last = vec[i];
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
		vector<int> vec(n);

		for (int& x : vec)
			cin >> x;

		res.push_back(solve(vec));
	}

	for (auto x : res)
		cout << x << ln;
}
