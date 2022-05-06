#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int k;
	cin >> k;
	cout << k / 2 << ln;

	if (k & 1)
	{
		cout << '3' << sp;
		k -= 3;
	}
	while (k > 0)
	{
		cout << '2' << sp;
		k -= 2;
	}
}

int main()
{
	FIO;
	solve();
}
