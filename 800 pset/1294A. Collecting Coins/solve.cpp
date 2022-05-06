#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

string solve(vector<int>& vec, int n)
{
	int mx = ranges::max(vec);

	for (int x : vec)
		n = n - (mx - x);

	return (n >= 0 && n % 3 == 0) ? "YES" : "NO";
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<string> res;

	while (t--)
	{
		vector<int> vec(3);

		for (int& x : vec)
			cin >> x;

		int n;
		cin >> n;
		res.push_back(solve(vec, n));
	}

	for (auto& x : res)
		cout << x << ln;
}
