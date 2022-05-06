#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n;
	cin >> n;

	if (n & 1)
		cout << n - 9 << sp << 9;
	else
		cout << n - 8 << sp << 8;
}

int main()
{
	FIO;
	solve();
	return 0;
}
