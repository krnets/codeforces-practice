#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	string guest, host, pile;
	cin >> guest >> host >> pile;

	guest += host;
	ranges::sort(guest);
	ranges::sort(pile);

	cout << (guest == pile ? "YES" : "NO");
}

int main()
{
	FIO;
	solve();
	return 0;
}
