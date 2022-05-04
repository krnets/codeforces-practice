#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

vector<int> solve(vector<int>& vec)
{
	vector<int> ans;

	ans.push_back(vec[0]);
	ans.push_back(vec[1]);
	ans.push_back(vec[6] - vec[1] - vec[0]);

	return ans;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<vector<int>> res;
	const int n = 7;

	while (t--)
	{
		vector<int> vec(n);

		for (auto& x : vec)
			cin >> x;

		res.push_back(solve(vec));
	}

	for (auto& vec : res)
	{
		for (auto& v : vec)
			cout << v << sp;

		cout << ln;
	}
}