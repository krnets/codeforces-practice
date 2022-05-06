#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

string solve(int n)
{
	return n % 4 == 0 ? "YES" : "NO";
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
		res.push_back(solve(n));
	}

	for (auto& x : res)
		cout << x << ln;
}
