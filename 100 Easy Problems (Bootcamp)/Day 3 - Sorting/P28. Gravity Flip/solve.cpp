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
	vector<int> vec(n);

	for (int i = 0; i < n; ++i)
		cin >> vec[i];

	sort(vec.begin(), vec.end());

	printVec(vec);
}

int main()
{
	FIO;
	solve();
	return 0;
}
