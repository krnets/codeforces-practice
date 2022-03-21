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
	string s;
	cin >> s;

	vector<int> vec;
	char last = s.front();
	vec.push_back(last);

	for (char c : s)
	{
		if (c != last)
			vec.push_back(c);

		last = c;
	}

	cout << n - vec.size();
}

int main()
{
	FIO;
	solve();
	return 0;
}
