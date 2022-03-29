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
		cout << -1;
	else
	{
		for (int i = 0; i < n; i += 2)
		{
			cout << i + 2 << sp << i + 1 << sp;
		}
	}
}

int main()
{
	FIO;
	solve();
}
