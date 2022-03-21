#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve(vector<int>& players)
{
	ranges::sort(players);
	int ans = INT_MAX;

	for (int i = 1; i < players.size(); ++i)
		ans = min(ans, players[i] - players[i - 1]);

	return ans;
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<int> res;

	while (t--)
	{
		int n;
		cin >> n;
		vector<int> players(n);

		for (int& player : players)
			cin >> player;

		res.push_back(solve(players));
	}

	for (auto x : res)
		cout << ln << x;
}
