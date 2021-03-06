#include <iostream>
#include <sstream>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve()
{
	int n, k, a, b;
	cin >> n >> k;

	for (int i = 0; i < k; ++i)
	{
		cin >> a;
		if (a == 0)
		{
			cout << i;
			return;
		}
	}

	for (int i = k; i < n; ++i)
	{
		cin >> b;
		if (b != a)
		{
			cout << i;
			return;
		}
	}

	cout << n;
}

int main()
{
	FIO;
	solve();
	return 0;
}
