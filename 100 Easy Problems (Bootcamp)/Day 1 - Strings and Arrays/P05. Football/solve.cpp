#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln "\n"
#define sp " "
#define all(x) x.begin(), x.end()

void solve()
{
	string players;
	cin >> players;
	int a = 0, b = 0;
	int aMax = 0, bMax = 0;

	for (char c : players)
	{
		if (c == '0')
		{
			++a;
			aMax = max(a, aMax);
			b = 0;
		}
		else
		{
			++b;
			bMax = max(b, bMax);
			a = 0;
		}
	}

	cout << (aMax >= 7 || bMax >= 7 ? "YES" : "NO");
}

int main()
{
	FIO;
	solve();
	return 0;
}
