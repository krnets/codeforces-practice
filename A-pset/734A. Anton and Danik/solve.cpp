#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

void solve()
{
	int n;
	string s;
	cin >> n >> s;

	int anton_wins = count_if(all(s), [](char c) { return c == 'A'; });
	int danik_wins = count_if(all(s), [](char c) { return c == 'D'; });

	cout << (anton_wins > danik_wins ? "Anton" : anton_wins < danik_wins ? "Danik" : "Friendship");
}

int main()
{
	FIO;
	solve();
	return 0;
}
