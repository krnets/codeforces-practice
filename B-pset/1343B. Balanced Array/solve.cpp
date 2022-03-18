#include <ranges>
#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve(int n)
{
	if ((n / 2) & 1)
	{
		cout << "NO" << ln;
	}
	else
	{
		cout << "YES" << ln;
		vector<int> vec(n);

		int half = n / 2;

		for (int i = 0, k = 2; i < half; k += 2, ++i)
		{
			vec[i] = k;
			vec[i + half] = k - 1;
		}
		vec[n - 1] = n + half - 1;

		for (int x : vec)
			cout << x << sp;

		cout << ln;
	}
}

int main()
{
	FIO;
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		solve(n);
	}

	return 0;
}
