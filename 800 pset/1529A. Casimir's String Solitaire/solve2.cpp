#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) begin(x), end(x)

bool solve(string s)
{
	return count(all(s), 'B') * 2 == s.length();
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
