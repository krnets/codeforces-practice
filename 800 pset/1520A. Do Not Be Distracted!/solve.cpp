#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

string solve(string& str)
{
	set<char> seen;
	char prev = ' ';

	for (char c : str)
	{
		if (c == prev)
			continue;

		if (seen.count(c))
			return "NO";

		prev = c;
		seen.insert(c);
	}

	return "YES";
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<string> res;

	while (t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		res.push_back(solve(s));
	}

	for (string& x : res)
		cout << ln << x;
}
