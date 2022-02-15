#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define sp ' '
#define ln '\n'

using namespace std;

void printVec(vector<int>& vec)
{
	for (int x : vec)
		cout << x << sp;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> vec;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		int pos = vec.size();

		for (int j = 0; j < vec.size(); ++j)
		{
			if (x > vec[j])
			{
				pos = j;
				break;
			}
		}
		vec.insert(vec.begin() + pos, x);

		cout << pos + 1 << ln;
	}

	printVec(vec);
}

int main()
{
	FIO;
	solve();
	return 0;
}
