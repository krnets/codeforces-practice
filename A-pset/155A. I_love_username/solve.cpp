#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n, first, low, high;
	cin >> n >> first;
	low = first;
	high = first;
	int ans = 0;

	while (--n)
	{
		int score;
		cin >> score;

		if (score > high)
		{
			++ans;
			high = score;
		}
		else if (score < low)
		{
			++ans;
			low = score;
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
