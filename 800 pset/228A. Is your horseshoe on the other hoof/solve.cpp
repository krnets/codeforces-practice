#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n, p, q;
	cin >> n;
	set<int> levels_passed;

	cin >> p;

	while (p--)
	{
		int x;
		cin >> x;
		levels_passed.insert(x);
	}

	cin >> q;

	while (q--)
	{
		int x;
		cin >> x;
		levels_passed.insert(x);
	}

	if (levels_passed.size() == n)
		cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
}

int main()
{
	FIO;
	solve();
	return 0;
}
