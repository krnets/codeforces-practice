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
	cout << "I hate";

	for (int i = 1; i < n; ++i)
	{
		if (i % 2 == 0)
			cout << " that I hate";
		else
			cout << " that I love";
	}

	cout << " it";
}

int main()
{
	FIO;
	solve();
	return 0;
}
