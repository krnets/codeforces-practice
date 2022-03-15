#include <iostream>
#include <sstream>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln '\n'
#define sp ' '

void solve()
{
	int n;
	cin >> n;

	if ((n - 2) % 3 == 0)
		cout << n - 3 << sp << 2 << sp << 1;
	else
		cout << n - 2 << sp << 1 << sp << 1;
}

int main()
{
	FIO;
	solve();
	return 0;
}
