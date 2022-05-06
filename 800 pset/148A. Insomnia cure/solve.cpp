#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;

	vector<bool> dragons_alive(d, true);

	for (int i = k - 1; i < d; i += k)
		dragons_alive[i] = false;

	for (int i = l - 1; i < d; i += l)
		dragons_alive[i] = false;

	for (int i = m - 1; i < d; i += m)
		dragons_alive[i] = false;

	for (int i = n - 1; i < d; i += n)
		dragons_alive[i] = false;

	int ans = 0;

	for (bool alive : dragons_alive)
		if (!alive)
			++ans;

	cout << ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
