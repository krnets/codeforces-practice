#include <iostream>
#include <vector>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve()
{
	int n;
	cin >> n;
	vector<string> vec(n);
	bool is_valid = true;

	for (string& line : vec)
		cin >> line;

	char c = vec.front().at(0);
	char d = vec.front().at(1);

	if (c == d)
		is_valid = false;
	else
	{
		vector<string> cmp(n, string(n, d));

		for (int i = 0; i < n; ++i)
		{
			cmp[i][i] = c;
			cmp[i][n - i - 1] = c;
		}

		for (int i = 0; i < n; ++i)
		{
			if (vec[i] != cmp[i])
			{
				is_valid = false;
				break;
			}
		}
	}

	cout << (is_valid ? "YES" : "NO");
}

int main()
{
	FIO;
	solve();
	return 0;
}
