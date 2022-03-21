#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

vector<int> sequence;

int solve(int k)
{
	return sequence[k - 1];
}

void precompute_sequence(int n)
{
	for (int i = 1; sequence.size() < n; ++i)
	{
		if (i % 3 == 0 || i % 10 == 3)
			continue;

		sequence.push_back(i);
	}
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<int> res;
	const int n = 1000;
	precompute_sequence(n);

	while (t--)
	{
		int k;
		cin >> k;
		res.push_back(solve(k));
	}

	for (auto x : res)
		cout << ln << x;
}
