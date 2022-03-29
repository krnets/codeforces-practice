#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

bool solve(vector<int>& vec, int d)
{
	ranges::sort(vec);

	return vec[0] + vec[1] <= d || vec.back() <= d;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<bool> res;

	while (t--)
	{
		int n, d;
		cin >> n >> d;
		vector<int> vec(n);

		for (int& x : vec)
			cin >> x;

		res.push_back(solve(vec, d));
	}

	for (bool b : res)
		cout << (b ? "Yes" : "No") << ln;
}
