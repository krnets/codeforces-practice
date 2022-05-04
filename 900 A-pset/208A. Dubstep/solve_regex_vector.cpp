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
	vector<string> vec;

	copy(sregex_token_iterator(song.begin(), song.end(), wub_re, -1),
		sregex_token_iterator(),
		back_inserter(vec));

	for (auto& word : vec)
		if (!word.empty())
			cout << word << sp;
}

int main()
{
	FIO;
	solve();
}