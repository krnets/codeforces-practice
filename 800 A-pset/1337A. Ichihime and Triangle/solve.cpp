#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

vector<int> solve()
{
	vector<int> ret;
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	ret.push_back(b);
	ret.push_back(c);
	ret.push_back(c);

	return ret;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<vector<int>> res;

	while (t--)
		res.push_back(solve());

	for (auto& vec : res)
	{
		for (int x : vec)
		{
			cout << x << sp;
		}
		cout << ln;
	}
}
