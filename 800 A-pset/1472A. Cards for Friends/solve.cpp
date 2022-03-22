#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int count_folds(int x)
{
	int ans = 0;

	while (x % 2 == 0)
	{
		++ans;
		x /= 2;
	}
	return ans;
}

string solve(int w, int h, int n)
{
	int w_folds = count_folds(w);
	int h_folds = count_folds(h);

	return pow(2, w_folds) * pow(2, h_folds) < n ? "NO" : "YES";
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<string> res;

	while (t--)
	{
		int w, h, n;
		cin >> w >> h >> n;
		res.push_back(solve(w, h, n));
	}

	for (auto& x : res)
		cout << x << ln;
}
