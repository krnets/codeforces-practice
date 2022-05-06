#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n, currSoldierHeight;
	cin >> n >> currSoldierHeight;

	int minHeight = currSoldierHeight;
	int maxHeight = currSoldierHeight;
	int minPos = 0;
	int maxPos = 0;

	for (int i = 1; i < n; ++i)
	{
		cin >> currSoldierHeight;

		if (currSoldierHeight > maxHeight)
		{
			maxHeight = currSoldierHeight;
			maxPos = i;
		}
		else if (currSoldierHeight <= minHeight)
		{
			minHeight = currSoldierHeight;
			minPos = i;
		}
	}

	if (minPos < maxPos)
		++minPos;

	cout << maxPos + (n - minPos - 1);
}

int main()
{
	FIO;
	solve();
	return 0;
}
