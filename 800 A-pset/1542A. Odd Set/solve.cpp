#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

bool solve(vector<int>& multi_set)
{
	int odd_count = 0;

	for (int x : multi_set)
		if (x & 1)
			++odd_count;

	return odd_count == multi_set.size() / 2;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<bool> res;

	while (t--)
	{
		int n;
		cin >> n;
		vector<int> vec(2 * n);

		for (int& x : vec)
			cin >> x;

		res.push_back(solve(vec));
	}

	for (bool b : res)
		cout << (b ? "Yes" : "No") << ln;
}
