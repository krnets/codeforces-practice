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
	vector<int> cards(n);

	for (auto& c : cards) cin >> c;

	int sereja = 0;
	int dima = 0;
	int left = 0;
	int right = n - 1;

	for (int i = 0; i < cards.size(); ++i)
	{
		if (i % 2 == 0)
		{
			if (cards[left] > cards[right])
			{
				sereja += cards[left];
				++left;
			}
			else
			{
				sereja += cards[right];
				--right;
			}
		}
		else
		{
			if (cards[left] > cards[right])
			{
				dima += cards[left];
				++left;
			}
			else
			{
				dima += cards[right];
				--right;
			}
		}
	}

	cout << sereja << sp << dima;
}

int main()
{
	FIO;
	solve();
}
