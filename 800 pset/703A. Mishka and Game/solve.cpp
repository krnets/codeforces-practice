#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int rounds, m, c;
	cin >> rounds;

	int mishka_won = 0;
	int chris_won = 0;

	while (rounds--)
	{
		cin >> m >> c;

		if (m > c)
			++mishka_won;
		else if (m < c)
			++chris_won;
	}
	string draw = "Friendship is magic!^^";

	cout << (mishka_won > chris_won ? "Mishka" : chris_won > mishka_won ? "Chris" : draw);
}

int main()
{
	FIO;
	solve();
}
