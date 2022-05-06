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
	vector<int> vec(n);

	for (int& x : vec)
		cin >> x;

	int min_pos = ranges::min_element(vec) - vec.begin();
	int max_pos = ranges::max_element(vec) - vec.begin();

	int a = n - max_pos + min_pos + 1;
	int b = n - min_pos + max_pos + 1;
	int c = n - min(min_pos, max_pos);
	int d = max(max_pos, min_pos) + 1;

	return min(a, min(b, min(c, d)));
}

int main()
{
	FIO;
	int t;
	cin >> t;
	vector<int> res;

	while (t--)
		res.push_back(solve());

	for (int x : res)
		cout << x << ln;
}
