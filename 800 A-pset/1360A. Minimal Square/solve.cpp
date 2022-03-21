#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(int a, int b)
{
	if (a < b)
		swap(a, b);

	int n = max(a, 2 * b);

	return n * n;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<int> res;

	while (t--)
	{
		int a, b;
		cin >> a >> b;
		res.push_back(solve(a, b));
	}

	for (auto x : res)
		cout << ln << x;
}
