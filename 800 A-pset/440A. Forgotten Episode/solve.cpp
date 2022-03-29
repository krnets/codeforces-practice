#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n;
	cin >> n;
	vector<int> vec(n - 1);

	for (int& x : vec)
		cin >> x;

	ranges::sort(vec);

	for (int i = 0; i < n; i++)
		if (vec[i] != i + 1)
		{
			cout << i + 1;
			return;
		}
}

int main()
{
	FIO;
	solve();
}