#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln '\n'

void solve()
{
	string s;
	cin >> s;

	int cnt_upper = ranges::count_if(s, [](char c) { return isupper(c); });

	auto fn_toupper = [](char c) { return toupper(c); };
	auto fn_tolower = [](char c) { return tolower(c); };

	cnt_upper > s.length() / 2
		? ranges::transform(s, s.begin(), fn_toupper)
		: ranges::transform(s, s.begin(), fn_tolower);

	cout << s;
}

int main()
{
	FIO;
	solve();
	return 0;
}
