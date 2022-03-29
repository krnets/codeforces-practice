#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

pair<int, int> solve(int l, int r)
{
	pair<int, int> ans;

	if (l * 2 > r)
	{
		ans.first = -1;
		ans.second = -1;
	} else 
	{
		ans.first = l;
		ans.second = l * 2;
	}

	return ans;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<pair<int, int>> res;

	while (t--)
	{
		int l, r;
		cin >> l >> r;
		res.push_back(solve(l, r));
	}

	for (auto p : res)
		cout << p.first << sp << p.second << ln;
}
