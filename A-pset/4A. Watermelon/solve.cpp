#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

void solve()
{
	int w;
	cin >> w;

	if (w > 2 && w % 2 == 0)
		cout << "YES" << ln;
	else cout << "NO" << ln;
}

int main()
{
	FIO;
	solve();
	return 0;
}
