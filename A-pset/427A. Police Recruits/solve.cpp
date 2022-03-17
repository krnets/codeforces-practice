#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int events;
	cin >> events;

	int current_officers_available = 0;
	int untreated_crimes_counter = 0;

	while (events--)
	{
		int event;
		cin >> event;
		bool crime_has_occured = event < 0;
		int officers_hired = event;

		if (crime_has_occured)
		{
			if (current_officers_available > 0)
				--current_officers_available;
			else
				++untreated_crimes_counter;
		}
		else
			current_officers_available += officers_hired;
	}
	cout << untreated_crimes_counter;
}

int main()
{
	FIO;
	solve();
	return 0;
}
