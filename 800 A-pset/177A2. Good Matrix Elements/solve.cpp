#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(vector<vector<int>>& vec, int n)
{
	int sum = 0;
	int mid = (n - 1) / 2;

	for (int i = 0; i < n; ++i)
	{
		sum += vec[i][mid];
		sum += vec[mid][i];

		for (int j = 0; j < n; ++j)
			if ((i == j) || min(i, j) + max(i, j) == n - 1)
				sum += vec[i][j];
	}
	sum -= 2 * vec[mid][mid];

	return sum;
}

int main()
{
	FIO;
	int n;
	cin >> n;
	vector<vector<int>> vec(n, vector<int>(n));

	for (auto& v : vec)
		for (int& x : v)
			cin >> x;

	cout << solve(vec, n);
}