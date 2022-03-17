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

	int time_to_get_to_party = 240 - k;
	int problem_counter = 0;
	const int additional_time = 5;

	while (n > 0 && time_to_get_to_party > 0)
	{
		if ((problem_counter + 1) * additional_time > time_to_get_to_party)
			break;

		++problem_counter;
		time_to_get_to_party -= (problem_counter * additional_time);
		--n;
	}

	cout << problem_counter;
}

int main()
{
	FIO;
	solve();
	return 0;
}
