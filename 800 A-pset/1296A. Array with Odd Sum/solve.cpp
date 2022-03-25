#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

bool solve(vector<int>& vec)
{
	int sum = accumulate(vec.begin(), vec.end(), 0);

	if (sum & 1)
		return true;

	bool even_present = false;
	bool odd_present = false;

	for (int x : vec)
	{
		if (x & 1)
			odd_present = true;
		else
			even_present = true;
	}

	return even_present && odd_present;
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
		vector<int> vec(n);

		for (int& x : vec)
			cin >> x;

		res.push_back(solve(vec));
	}

	for (bool b : res)
		cout << (b ? "YES" : "NO") << ln;
}
