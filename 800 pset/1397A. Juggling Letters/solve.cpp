#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

bool solve(vector<string>& vec, int n)
{
	map<char, int> map;

	for (string& s : vec)
		for (char c : s)
			map[c]++;

	for (auto [ch, x] : map)
		if (x % n != 0)
			return false;

	return true;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<bool> res;

	while (t--)
	{
		int n;
		cin >> n;
		vector<string> vec(n);

		for (auto& s : vec)
			cin >> s;

		res.push_back(solve(vec, n));
	}

	for (bool b : res)
		cout << (b ? "YES" : "NO") << ln;
}