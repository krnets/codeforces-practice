#include <algorithm>
#include <iostream>
#include <map>
#include <sstream>
#include <vector>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln "\n"
#define sp " "
#define all(x) x.begin(), x.end()

void solve()
{
	int n;
	cin >> n;
	vector<int> vec;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		vec.push_back(x);
	}
	int right = 1, ans = 1;

	for (int left = 0; left < n; ++left)
	{
		right = max(left + 1, right);

		while (right < n && (2 * vec[right - 1] >= vec[right]))
			++right;

		if (right == n)
			--right;

		if (2 * vec[right - 1] < vec[right])
			--right;

		ans = max(ans, right - left + 1);
	}

	cout << ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
