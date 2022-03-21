#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln '\n'
#define sp ' '
#define all(x) x.begin(), x.end()

void solve()
{
	int n;
	cin >> n;
	vector<int> vec(n), aux(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> vec[i];
		aux[i] = vec[i];
	}
	sort(aux.begin(), aux.end());

	int left = 0, right = n - 1;

	while (left < n && vec[left] == aux[left])
		++left;

	while (right > 0 && vec[right] == aux[right])
		--right;

	if (left == n && right == 0)
	{
		cout << "yes" << ln;
		cout << 1 << sp << 1 << ln;
	}
	else
	{
		reverse(vec.begin() + left, vec.begin() + right + 1);

		for (int i = 0; i < n; ++i)
		{
			if (vec[i] != aux[i])
			{
				cout << "no" << ln;
				return;
			}
		}
		cout << "yes" << ln;
		cout << left + 1 << sp << right + 1;
	}
}

int main()
{
	FIO;
	solve();
	return 0;
}
