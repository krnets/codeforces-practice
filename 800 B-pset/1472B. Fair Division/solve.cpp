#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

string solve(vector<int>& weights)
{
	ranges::sort(weights, greater());
	int a_sum = 0;
	int b_sum = 0;

	for (int weight : weights)
	{
		if (a_sum < b_sum)
			a_sum += weight;
		else
			b_sum += weight;
	}

	return a_sum == b_sum ? "YES" : "NO";
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
		vector<int> vec(n);

		for (int& x : vec) cin >> x;

		res.push_back(solve(vec));
	}

	for (auto& x : res)
	{
		cout << x << ln;
	}
}
