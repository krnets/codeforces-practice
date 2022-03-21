#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n;
	cin >> n;
	const int subjects = 3;
	vector teams(subjects, vector<int>());

	for (int i = 0; i < n; ++i)
	{
		int subject;
		cin >> subject;

		teams[subject - 1].push_back(i + 1);
	}

	int teams_possible = INT_MAX;

	for (vector<int> team : teams)
	{
		teams_possible = min(teams_possible, int(team.size()));
	}
	cout << teams_possible << ln;

	for (int i = 0; i < teams_possible; ++i)
	{
		for (int j = 0; j < subjects; ++j)
		{
			cout << teams[j][i] << sp;
		}
		cout << ln;
	}
}

int main()
{
	FIO;
	solve();
	return 0;
}
