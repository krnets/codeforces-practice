#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln "\n"
#define sp " "

void solve()
{
	int students, m;
	cin >> students >> m;
	vector<int> puzzles(m);

	for (int& x : puzzles)
		cin >> x;

	ranges::sort(puzzles);

	int ans = INT_MAX;

	for (int i = 0; i <= m - students; i++)
	{
		ans = min(ans, puzzles[i + students - 1] - puzzles[i]);
	}

	cout << ans;
}

int main()
{
	FIO;
	solve();
}