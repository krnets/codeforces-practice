#include <algorithm>
#include <iostream>
#include <map>
#include <string>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln "\n"
#define sp " "
#define all(x) x.begin(), x.end()

void solve()
{
	int n;
	string digits;
	cin >> n >> digits;

	auto pred = [](char c) { return c == '8'; };

	int count8s = count_if(digits.begin(), digits.end(), pred);
	int len = digits.length();
	count8s = min(count8s, len / 11);
	int ans = max(0, count8s);

	cout << ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
