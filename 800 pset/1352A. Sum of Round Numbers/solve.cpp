#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve(int n)
{
	vector<int> nums;
	int pw = 1;

	while (n > 0)
	{
		if (n % 10 != 0)
		{
			nums.push_back((n % 10) * pw);
		}

		n /= 10;
		pw *= 10;
	}

	cout << nums.size() << ln;

	ranges::reverse(nums);

	for (int num : nums)
	{
		cout << num << sp;
	}
	cout << ln;
}

int main()
{
	FIO;
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		solve(n);
	}
	return 0;
}
