#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	string song, word;
	cin >> song;
	int n = song.length();

	for (int i = 0; i < n; i++)
	{
		if (i + 2 < n &&
			song[i] == 'W' && song[i + 1] == 'U' && song[i + 2] == 'B')
		{
			if (!word.empty())
				cout << word << sp;

			word.clear();
			i += 2;
		}
		else word += song[i];
	}

	cout << word;
}

int main()
{
	FIO;
	solve();
}