#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(int n)
{
	vector<int> vec;
	map<int, int> freq;
	int val = 0;
	int idx = 0;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		vec.push_back(x);
		freq[x]++;
	}

	for (auto [x, cnt] : freq)
	{
		if (cnt == 1)
		{
			val = x;
			break;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (vec[i] == val)
		{
			idx = i + 1;
			break;
		}
	}
	return idx;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<int> res;

	while (t--)
	{
		int n;
		cin >> n;
		res.push_back(solve(n));
	}

	for (int x : res)
		cout << x << ln;

	return 0;
}
