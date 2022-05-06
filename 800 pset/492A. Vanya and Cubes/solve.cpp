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
	int sum = 0;
	int levels = 0;

	while (sum <= n)
	{
		++levels;
		sum += levels * (levels + 1) / 2;
	}
	cout << levels - 1;
}

int main()
{
	FIO;
	solve();
}
