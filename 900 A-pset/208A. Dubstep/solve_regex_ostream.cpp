#include <bits/stdc++.h>
#include <regex>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln "\n"
#define sp " "

void solve()
{
	string song;
	cin >> song;

	regex wub_re("WUB");

	copy(sregex_token_iterator(song.begin(), song.end(), wub_re, -1),
		sregex_token_iterator(),
		ostream_iterator<string>(cout, sp));
}

int main()
{
	FIO;
	solve();
}