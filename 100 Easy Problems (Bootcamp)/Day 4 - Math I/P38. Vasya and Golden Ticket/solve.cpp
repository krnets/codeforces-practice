#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln '\n'
#define sp ' '
typedef long long ll;

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	s.erase(remove_if(s.begin(), s.end(), [](char c) { return c == '0'; }), s.end());
	n = s.length();

	if (n == 0)
	{
		cout << "YES";
		return;
	}

	int sum = 0;
	bool possible = false;

	for (int i = 0; i < n - 1; ++i)
	{
		sum += s[i] - '0';
		int segment_sum = 0;

		for (int j = i + 1; j < n; ++j)
		{
			segment_sum += s[j] - '0';

			if (segment_sum == sum)
				segment_sum = 0;
		}

		if (segment_sum == 0)
		{
			possible = true;
			break;
		}
	}

	cout << (possible ? "YES" : "NO");
}

int main()
{
	FIO;
	solve();
	return 0;
}
