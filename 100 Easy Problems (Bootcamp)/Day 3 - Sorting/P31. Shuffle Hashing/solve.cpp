#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define sp ' '
#define ln '\n'
#define ll unsigned long long

using namespace std;

void solve()
{
	string p, h;
	cin >> p >> h;
	int k = p.length();

	sort(p.begin(), p.end());

	for (int i = 0; (i + k - 1) < h.length(); ++i)
	{
		string sub = h.substr(i, k);
		sort(sub.begin(), sub.end());

		if (sub == p)
		{
			cout << "YES" << ln;
			return;
		}
	}

	cout << "NO" << ln;
}

int main()
{
	FIO;
	int t;
	cin >> t;

	while (t--)
		solve();

	return 0;
}
