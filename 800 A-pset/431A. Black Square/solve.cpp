#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	vector<int> nums(4);

	for (int& num : nums)
		cin >> num;

	string s;
	cin >> s;
	int ans = 0;

	for (char c : s)
		ans += nums[(c - '0' - 1)];

	cout << ans;
}

int main()
{
	FIO;
	solve();
}
