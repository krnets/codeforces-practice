#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	string p;
	cin >> p;
	set<char> set{ 'H','Q','9' };
	bool will_produce_output = false;

	for (char c : p)
		if (set.contains(c))
		{
			will_produce_output = true;
			break;
		}

	cout << (will_produce_output ? "YES" : "NO");
}

int main()
{
	FIO;
	solve();
}