#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(int a, int b, int n)
{
	int cnt = 0;

	while (a <= n)
	{
		if (a > b)
			swap(a, b);

		a += b;
		++cnt;
	}
	return cnt;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<int> res;

	while (t--)
	{
		int a, b, n;
		cin >> a >> b >> n;
		res.push_back(solve(a, b, n));
	}

	for (int x : res)
		cout << x << ln;
}
