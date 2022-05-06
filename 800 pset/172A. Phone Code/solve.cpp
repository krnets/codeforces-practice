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
	vector<string> vec(n);

	for (auto& s : vec)
		cin >> s;

	int ans = 0;
	int len = vec.front().length();

	for (int i = 0; i < len; i++)
	{
		char c = vec.front().at(i);

		for (auto& s : vec)
		{
			if (s[i] != c)
			{
				cout << ans;
				return;
			}
		}
		++ans;
	}
}

int main()
{
	FIO;
	solve();
}
