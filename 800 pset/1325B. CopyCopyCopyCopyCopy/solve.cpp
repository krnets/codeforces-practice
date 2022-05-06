#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve()
{
	int n;
	cin >> n;
	set<int> set;

	while(n--)
	{
		int x;
		cin >> x;
		set.insert(x);
	}

	return set.size();
}

int main()
{
	FIO;
	int t;
	cin >> t;

	while (t--)
		cout << solve() << ln;
}
