#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	string s;
	cin >> s;
	bool has_min_5_chars = s.length() >= 5;
	bool has_large_letter = false;
	bool has_small_letter = false;
	bool has_invalid_char = false;
	bool has_digit = false;
	set<char> special{ '!', '?', '.', ',', '_' };

	for (char c : s)
	{
		if (islower(c))
			has_small_letter = true;
		else if (isupper(c))
			has_large_letter = true;
		else if (isdigit(c))
			has_digit = true;
		else if (!special.contains(c))
			has_invalid_char = true;
	}

	bool password_is_strong = has_min_5_chars &&
		has_small_letter &&
		has_large_letter &&
		has_digit &&
		!has_invalid_char;

	cout << (password_is_strong ? "Correct" : "Too weak");
}

int main()
{
	FIO;
	solve();
}
