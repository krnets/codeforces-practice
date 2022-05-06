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
	vector<int> vec(n);

	for (int& x : vec)
		cin >> x;

	ranges::sort(vec);

	cout << vec[n / 2];
}

int main()
{
	FIO;
	solve();
}
