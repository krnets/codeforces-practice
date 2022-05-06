#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) begin(x), end(x)

pair<int, int> solve(int n)
{
	return make_pair(1, n - 1);
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<pair<int, int>> res;

	while (t--)
	{
		int n;
		cin >> n;
		res.push_back(solve(n));
	}

	for (auto p : res)
		cout << p.first << sp << p.second << ln;
}
