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
	vector<int> vec(n);

	for (int& x : vec)
		cin >> x;

	int last = vec.front();
	int curr_len = 1;
	int ans = curr_len;

	for (int i = 1; i < n; i++)
	{
		if (vec[i] >= last)
		{
			++curr_len;
			ans = max(ans, curr_len);
		}
		else curr_len = 1;

		last = vec[i];
	}

	cout << ans;
}

int main()
{
	FIO;
	solve();
}