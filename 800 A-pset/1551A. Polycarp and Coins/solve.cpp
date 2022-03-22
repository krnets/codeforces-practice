#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

pair<int, int> solve(int n)
{
	int a = n / 3;
	int b = a;

	if (n % 3 == 1)
		++a;
	else if (n % 3 == 2)
		++b;

	return make_pair(a, b);
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<pair<int, int>> res;

	while (t--)
	{
		int n;
		cin >> n;
		res.push_back(solve(n));
	}

	for (auto& p : res)
		cout << p.first << sp << p.second << ln;
}
