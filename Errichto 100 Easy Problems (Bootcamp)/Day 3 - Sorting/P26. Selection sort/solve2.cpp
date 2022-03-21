#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

void printVec(vector<int>& vec)
{
	for (int x : vec)
	{
		cout << x << ' ';
	}
	cout << '\n';
}

void bubbleSort(vector<int>& vec, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		auto it = min_element(vec.begin() + i, vec.end());

		swap(vec[i], *it);

		printVec(vec);
	}
}

void solve()
{
	int n;
	cin >> n;
	vector<int> vec(n);

	for (int i = 0; i < n; ++i)
		cin >> vec[i];

	bubbleSort(vec, n);
}

int main()
{
	FIO;
	solve();
	return 0;
}
