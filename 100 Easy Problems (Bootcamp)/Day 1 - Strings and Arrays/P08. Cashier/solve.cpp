#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln "\n"
#define sp " "
#define all(x) x.begin(), x.end()

void solve()
{
	int n, L, a, res = 0;
	cin >> n >> L >> a;
	vector<pair<int, int>> vec;
	vec.emplace_back(0, 0);

	while (n--)
	{
		int x, y;
		cin >> x >> y;
		vec.emplace_back(x, y);
	}
	vec.emplace_back(L, 0);

	for (int i = 1; i < vec.size(); ++i)
	{
		auto [x,y] = vec[i - 1];
		int z = vec[i].first;

		res += (z - (x + y)) / a;
	}

	cout << res;
}

int main()
{
	FIO;
	solve();
	return 0;
}
