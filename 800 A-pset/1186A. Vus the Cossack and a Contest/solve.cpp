#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n, m, k;
	cin >> n >> m >> k;

	if (m >= n && k >= n)
		cout << "Yes";
	else cout << "No";
}

int main()
{
	FIO;
	solve();
}
