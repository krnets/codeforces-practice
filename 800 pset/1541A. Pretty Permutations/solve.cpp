#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

vector<int> solve(int n)
{
	vector<int> vec(n);
	iota(vec.begin(), vec.end(), 1);

	if (n % 2 == 0)
	{
		for (int i = 0; i < n; i += 2)
			swap(vec[i], vec[i + 1]);
	}
	else
	{
		swap(vec[2], vec[1]);
		swap(vec[1], vec[0]);

		for (int i = 3; i < n; i += 2)
			swap(vec[i], vec[i + 1]);
	}

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
		for (auto& v : vec)
			cout << v << sp;

		cout << ln;
	}
}