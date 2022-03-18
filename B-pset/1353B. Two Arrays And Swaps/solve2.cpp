#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	vector<int> b(n);

	for (int& x : a) cin >> x;
	for (int& x : b) cin >> x;

	ranges::sort(a);
	ranges::sort(b, greater());

	for (int i = 0; i < k; ++i)
		if (a[i] < b[i])
			swap(a[i], b[i]);

	cout << accumulate(all(a), 0) << ln;
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
