#include <iostream>
#include <sstream>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln '\n'

void solve()
{
	int h, m;
	cin >> h >> m;

	int ans = (24 - h) * 60 - m;

	cout << ans << ln;
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
