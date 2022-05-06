#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

vector<int> solve(int a, int b, int c)
{
	const int n = 3;
	vector<int> vec(n);

	vec[0] = max(0, max(b, c) + 1 - a);
	vec[1] = max(0, max(a, c) + 1 - b);
	vec[2] = max(0, max(a, b) + 1 - c);

	return vec;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<vector<int>> res;

	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		res.push_back(solve(a, b, c));
	}

	for (auto& vec : res)
	{
		for (int x : vec)
		{
			cout << x << sp;
		}
		cout << ln;
	}
}
