#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve()
{
	int N, ans{0};
	cin >> N;

	while (N--)
	{
		string op;
		cin >> op;

		if (op[1] == '+')
			++ans;
		else
			--ans;
	}
	cout << ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
