#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n, k;
	cin >> n >> k;
	int team_size = 3;
	int max_participant_times = 5;
	int students = 0;

	while (n--)
	{
		int participated;
		cin >> participated;

		if (max_participant_times - participated >= k)
			++students;
	}
	cout << students / team_size;
}

int main()
{
	FIO;
	solve();
	return 0;
}
