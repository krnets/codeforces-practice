#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int friends, bottles, l, limes, slices, p, nl, np;
	cin >> friends >> bottles >> l >> limes >> slices >> p >> nl >> np;

	int a = bottles * l / nl;
	int b = min(limes * slices, p / np);

	cout << min(a, b) / friends;
}

int main()
{
	FIO;
	solve();
}
