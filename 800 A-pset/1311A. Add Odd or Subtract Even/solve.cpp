#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(int a, int b)
{
	if (a == b)
		return 0;

	if (a > b && (a - b) % 2 == 0 ||
		a < b && (b - a) % 2 != 0)
		return 1;

	return 2;
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

	for (auto& x : res)
		cout << x << ln;
}
