#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
typedef unsigned long long ul;

void solve()
{
	ul n, ans(0);
	cin >> n;
	vector<ul> vec(n);

	for (auto& i : vec)
		cin >> i;

	if (vec.size() >= 4)
	{
		sort(vec.begin(), vec.end());
		ans = vec.at(vec.size() - 4);
	}
	cout << ans * ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
