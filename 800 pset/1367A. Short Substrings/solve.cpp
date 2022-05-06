#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

string solve(string& s)
{
	string ans;
	ans.push_back(s.front());

	for (int i = 1; i < s.length(); i += 2)
	{
		ans += s[i];
	}

	return ans;
}

int main()
{
	FIO;
	int t;
	cin >> t;

	while (t--)
	{
		string s;
		cin >> s;
		cout << solve(s) << ln;
	}

	return 0;
}
