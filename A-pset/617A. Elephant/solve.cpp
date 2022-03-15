#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln '\n'

void solve()
{
	int n;
	cin >> n;

	cout << (n % 5 ? 1 : 0) + n / 5;
}

int main()
{
	FIO;
	solve();
	return 0;
}
