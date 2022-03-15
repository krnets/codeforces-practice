#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

void solve()
{
	int stops;
	cin >> stops;
	int curr_capacity = 0;
	int max_required_capacity = 0;

	while (stops--)
	{
		int exit, enter;
		cin >> exit >> enter;

		curr_capacity -= exit;
		curr_capacity += enter;

		max_required_capacity = max(max_required_capacity, curr_capacity);
	}
	cout << max_required_capacity;
}

int main()
{
	FIO;
	solve();
	return 0;
}
