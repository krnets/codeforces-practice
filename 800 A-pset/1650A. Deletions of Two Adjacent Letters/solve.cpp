#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

bool solve(string& str, char ch)
{
	for (int i = 0; i < str.length(); i++)
		if (str[i] == ch && i % 2 == 0)
			return true;

	return false;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<bool> res;

	while (t--)
	{
		string str;
		char ch;
		cin >> str >> ch;
		res.push_back(solve(str, ch));
	}

	for (bool b : res)
		cout << (b ? "YES" : "NO") << ln;
}