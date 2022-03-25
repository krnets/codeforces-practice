#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

bool solve(string& table_card, vector<string>& cards_in_hand)
{
	for (string& card : cards_in_hand)
	{
		if (card.front() == table_card.front())
			return true;

		if (card.back() == table_card.back())
			return true;
	}

	return false;
}

int main()
{
	FIO;
	string table_card;
	cin >> table_card;
	const int n = 5;
	vector<string> cards_in_hand(n);

	for (string& card : cards_in_hand)
		cin >> card;

	bool ans = solve(table_card, cards_in_hand);

	cout << (ans ? "YES" : "NO");
}
