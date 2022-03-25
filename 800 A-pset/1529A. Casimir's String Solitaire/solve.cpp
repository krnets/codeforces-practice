#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

bool solve(string s)
{
	if (s.length() & 1) 
		return false;

	int b_count = ranges::count_if(s, [](char c) { return c == 'B'; });

	return b_count == s.length() / 2;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<bool> res;

	while (t--)
	{
		string s;
		cin >> s;
		res.push_back(solve(s));
	}

	for (bool b : res)
		cout << (b ? "YES" : "NO") << ln;
}
