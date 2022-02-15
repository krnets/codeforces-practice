#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;
#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve()
{
	int n, x, ans = 0;
	cin >> n >> x;

	for (int i = 1; i <= sqrt(x); ++i)
	{
		if (x % i == 0)
		{
			if (x / i <= n)
			{
				++ans;

				if (x / i != i)
					++ans;
			}
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
