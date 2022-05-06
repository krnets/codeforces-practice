#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

bool solve(vector<int>& vec)
{
	ranges::sort(vec);

	for (int i = 1; i < vec.size(); ++i)
		if (vec[i] - vec[i - 1] > 1)
			return false;

	return true;
}

int main()
{
	FIO;
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		vector<int> vec(n);

		for (int& x : vec)
			cin >> x;

		cout << (solve(vec) ? "YES" : "NO") << ln;
	}
	return 0;
}
