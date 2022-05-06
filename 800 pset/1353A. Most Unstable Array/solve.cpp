#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(int n, int m)
{
	return n == 1 ? 0 : n == 2 ? m : m * 2;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<int> res;

	while (t--)
	{
		int n, m;
		cin >> n >> m;
		res.push_back(solve(n, m));
	}

	for (auto& x : res)
		cout << x << ln;
}
