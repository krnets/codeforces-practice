#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int red, blue;
	cin >> red >> blue;

	int different = min(red, blue);
	int same = (max(red, blue) - different) / 2;

	cout << different << sp << same;
}

int main()
{
	FIO;
	solve();
	return 0;
}
