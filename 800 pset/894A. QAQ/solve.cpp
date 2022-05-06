#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	string s;
	cin >> s;
	const string word = "QAQ";
	int ans = 0;
	int n = s.length();

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
					++ans;

			}
		}
	}

	cout << ans;
}

int main()
{
	FIO;
	solve();
}