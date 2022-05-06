#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve()
{
	int a, b, c;
	cin >> a >> b >> c;

	int n = 2 * abs(a - b);

	if (a > n || b > n || c > n)
		return -1;

	int d = n / 2 + c;

	while (d > n)
		d -= n;

	return d;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<int> res;

	while (t--)
		res.push_back(solve());

	for (int x : res)
		cout << x << ln;
}
