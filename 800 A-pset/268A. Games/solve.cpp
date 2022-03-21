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
	vector<int> host(n);
	vector<int> guest(n);
	int ans = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> host[i] >> guest[i];

		for (int j = 0; j < i; ++j)
		{
			if (host[i] == guest[j]) ++ans;
			if (host[j] == guest[i]) ++ans;
		}
	}
	cout << ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
