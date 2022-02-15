#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

bool isLucky(int n)
{
	while (n % 10 == 4 || n % 10 == 7)
		n /= 10;

	return n == 0;
};

void solve()
{
	constexpr int limit = 1000;
	int n;
	cin >> n;

	for (int i = 1; i < limit; ++i)
	{
		if (n % i == 0 && isLucky(i))
		{
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}

int main()
{
	FIO;
	solve();
	return 0;
}
