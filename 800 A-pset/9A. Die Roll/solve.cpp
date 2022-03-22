#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int y, w;
	cin >> y >> w;

	const int sides = 6;
	int a = max(y, w);
	int p = sides - a + 1;
	int divisor = gcd(p, sides);

	cout << p / divisor << '/' << sides / divisor;
}

int main()
{
	FIO;
	solve();
}
