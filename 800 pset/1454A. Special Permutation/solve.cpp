#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

vector<int> solve(int n)
{
	vector<int> vec(n);

	for (int i = 0; i < n; ++i)
		vec[i] = (i + 1) % n + 1;

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
		int n;
		cin >> n;
		res.push_back(solve(n));
	}

	for (auto& vec : res)
	{
		for (int x : vec)
			cout << x << sp;

		cout << ln;
	}
}
