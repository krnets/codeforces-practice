#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	string s;
	cin >> s;
	int n = s.length();
	vector<int> dp(n);

	int q_count = 0;

	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'Q')
			++q_count;

		dp[i] = q_count;
	}
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'A')
			ans += dp[i] * (dp[n - 1] - dp[i]);
	}

	cout << ans;
}

int main()
{
	FIO;
	solve();
}