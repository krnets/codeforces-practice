#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(int n)
{
	vector<int> vec(n);

	for (int& x : vec)
		cin >> x;

	int odd = 0;
	int even = 0;
	int fine = 0;

	for (int i = 0; i < n; ++i)
	{
		if (i & 1)
		{
			if (vec[i] % 2 == 0) ++odd;
			else ++fine;
		}
		else
		{
			if (vec[i] % 2 != 0) ++even;
			else ++fine;
		}
	}
	return fine == n ? 0 : odd == even ? even : -1;
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
		cout << ln << x;
}
