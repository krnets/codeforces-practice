#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(int n)
{
	if (n <= 2)
		return 0;

	return n / 2 - (n & 1 ? 0 : 1);
}

int main()
{
	FIO;
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		cout << solve(n) << ln;
	}

	return 0;
}
