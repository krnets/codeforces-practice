#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n;
	string s;
	cin >> n >> s;
	int ans = 0;
	int x_count = 0;
	bool last_char_is_x = false;

	for (char c : s)
	{
		if (c == 'x')
		{
			++x_count;

			if (x_count >= 3)
			{
				++ans;
			}
			last_char_is_x = true;
		}
		else
		{
			last_char_is_x = false;
			x_count = 0;
		}
	}

	cout << ans;
}

int main()
{
	FIO;
	solve();
}
