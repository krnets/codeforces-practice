#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

string solve(string& s, int n)
{
	string ret;

	for (int i = 0; i < n ; i++)
	{
		string sub = s.substr(i, n);
		ret += sub[i];
	}

	return ret;
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
		string s;
		cin >> n >> s;
		res.push_back(solve(s, n));
	}

	for (auto& s : res)
		cout << s << ln;
}