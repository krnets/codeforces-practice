#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve()
{
	int n, x;
	cin >> n >> x;
	vector<int> vec(n);
	unordered_set<int> set;
	bool found = false;

	for (int& i : vec)
		cin >> i;

	for (int i : vec)
	{
		int complement = x - i;

		if (set.count(complement))
		{
			found = true;
			break;
		}
		set.insert(i);
	}

	cout << (found ? "YES" : "NO");
}

int main()
{
	FIO;
	solve();
	return 0;
}
