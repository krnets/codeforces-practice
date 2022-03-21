#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(int a, int b)
{
	int diff = abs(a - b);
	int ans = diff / 10 + (diff % 10 ? 1 : 0);

	return ans;
}

int main()
{
	FIO;
	int t;
	cin >> t;

	while (t--)
	{
		int a, b;
		cin >> a >> b;
		cout << solve(a, b) << ln;
	}
	return 0;
}
