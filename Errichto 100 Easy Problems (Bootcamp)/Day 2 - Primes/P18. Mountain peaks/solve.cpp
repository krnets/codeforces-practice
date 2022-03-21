#include <iostream>
#include <vector>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

int max_days(int n, vector<int> vec)
{
	int ans = 0;

	for (int block = 1; block <= n; ++block)
	{
		if (n % block == 0)
		{
			int count_days = 0;

			for (int start = 0; start < n; start += block)
			{
				bool day_ok = false;

				for (int i = start; i < start + block; ++i)
				{
					if (1 <= i && i <= n - 2 &&
						vec[i - 1] < vec[i] && vec[i] > vec[i + 1])

						day_ok = true;
				}

				if (day_ok)
				{
					count_days++;
				}
			}
			if (count_days == n / block)
			{
				ans = max(ans, count_days);
			}
		}
	}
	return ans;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> vec(n);

	for (auto& x : vec)
		cin >> x;

	cout << max_days(n, vec);
}

int main()
{
	FIO;
	solve();
	return 0;
}
