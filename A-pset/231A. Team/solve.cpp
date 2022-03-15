#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

void solve()
{
	int n, v, p, t, ans(0);
	cin >> n;

	while (n--)
	{
		cin >> v >> p >> t;

		if (v + p + t >= 2)
			++ans;
	}

	cout << ans << ln;
}

int main()
{
	FIO;
	solve();
	return 0;
}
