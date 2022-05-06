#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

ll solve(vector<ll>& candies, vector<ll>& oranges)
{
	ll ans = 0;
	int n = candies.size();

	ll candies_min = ranges::min(candies);
	ll oranges_min = ranges::min(oranges);

	for (int i = 0; i < n; ++i)
	{
		ll a = candies[i] - candies_min;
		ll b = oranges[i] - oranges_min;

		ans += max(a, b);
	}

	return ans;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<ll> res;

	while (t--)
	{
		ll n;
		cin >> n;
		vector<ll> candies(n), oranges(n);

		for (auto& c : candies) cin >> c;
		for (auto& o : oranges) cin >> o;

		res.push_back(solve(candies, oranges));
	}

	for (auto x : res)
		cout << x << ln;
}
