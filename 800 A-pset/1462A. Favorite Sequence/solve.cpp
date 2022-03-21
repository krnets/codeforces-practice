#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln '\n'
#define sp ' '
#define ll long long

void solve()
{
	int n;
	cin >> n;
	vector<int> vec(n);
	vector<int> aux(n);

	for (int& x : vec)
		cin >> x;

	int left = 0;
	int right = n - 1;
	int pos = 0;

	while (left < right)
	{
		aux[pos++] = vec[left++];
		aux[pos++] = vec[right--];
	}

	if (pos < n)
		aux[pos] = vec[left];

	for (int x : aux)
		cout << x << sp;

	cout << ln;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	while (t--) solve();
}
