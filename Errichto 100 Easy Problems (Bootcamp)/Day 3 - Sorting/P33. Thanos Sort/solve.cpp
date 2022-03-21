#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ul;
typedef vector<ll> vll;
typedef vector<ul> vul;
typedef vector<string> vs;
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define sp ' '
#define ln '\n'

int thanos_sort(const vll::iterator& begin, const vll::iterator& end)
{
	int n = distance(begin, end);

	if (is_sorted(begin, end))
		return n;

	int mid = n / 2;

	return max(thanos_sort(begin, begin + mid), thanos_sort(begin + mid, end));
}

void solve()
{
	ll n;
	cin >> n;
	vll vec(n);

	for (auto& x : vec)
		cin >> x;

	int ans = thanos_sort(vec.begin(), vec.end());

	cout << ans << ln;
}

int main()
{
	FIO;
	solve();
	return 0;
}
