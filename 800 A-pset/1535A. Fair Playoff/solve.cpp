#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

string solve(vector<int>& players)
{
	int a = max(players[0], players[1]);
	int b = min(players[2], players[3]);

	int c = min(players[0], players[1]);
	int d = max(players[2], players[3]);

	return (a > b && c < d) ? "YES" : "NO";
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<string> res;

	while (t--)
	{
		vector<int> players(4);

		for (int& player : players)
			cin >> player;

		res.push_back(solve(players));
	}

	for (auto& x : res)
		cout << x << ln;
}
