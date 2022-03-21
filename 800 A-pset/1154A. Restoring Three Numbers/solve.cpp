#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n = 4;
	vector<int> vec(n);

	for (int& x : vec)
		cin >> x;

	ranges::sort(vec, std::greater<int>());

	int mx = vec.front();

	for (int i = 1; i < n; ++i)
	{
		cout << mx - vec[i] << sp;
	}

}

int main()
{
	FIO;
	solve();
	return 0;
}
