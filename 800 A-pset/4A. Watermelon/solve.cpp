#include <iostream>
#include <sstream>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln '\n'

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
