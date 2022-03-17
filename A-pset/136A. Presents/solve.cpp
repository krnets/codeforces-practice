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
	vector<int> vec(n + 1);

	for (int i = 1; i <= n; ++i)
	{
		int p;
		cin >> p;
		vec[p] = i;
	}

	for (int i = 1; i <= n; ++i)
	{
		cout << vec[i] << sp;
	}
}

int main()
{
	FIO;
	solve();
	return 0;
}
