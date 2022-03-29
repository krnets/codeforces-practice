#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(vector<int>& vec)
{
	int sum = accumulate(vec.begin(), vec.end(), 0);
	int n = vec.size();

	return sum < n ? 1 : sum - n;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<int> res;

	while (t--)
	{
		int n;
		cin >> n;
		vector<int> vec(n);

		for (int& x : vec)
			cin >> x;

		res.push_back(solve(vec));
	}

	for (int x : res)
		cout << x << ln;
}
