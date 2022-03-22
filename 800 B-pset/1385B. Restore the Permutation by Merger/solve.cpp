#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

vector<int> solve(vector<int>& vec)
{
	vector<int> ret;
	set<int> seen;

	for (int x : vec)
	{
		if (!seen.contains(x))
			ret.push_back(x);

		seen.insert(x);
	}

	return ret;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<vector<int>> res;

	while (t--)
	{
		int n;
		cin >> n;
		vector<int> vec(n * 2);

		for (int& x : vec)
			cin >> x;

		res.push_back(solve(vec));
	}

	for (auto& vec : res)
	{
		for (int x : vec)
			cout << x << sp;

		cout << ln;
	}
}
