#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	string s, decrypted;
	cin >> s;

	int left = 0;
	int right = s.length() - 1;
	bool flag = s.length() & 1;

	while (left <= right)
	{
		if (flag)
		{
			decrypted += s[left];
			++left;
		}
		else
		{
			decrypted += s[right];
			--right;
		}
		flag = !flag;
	}
	ranges::reverse(decrypted);

	cout << decrypted;
}

int main()
{
	FIO;
	solve();
}
