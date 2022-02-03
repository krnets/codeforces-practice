#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln "\n"
#define sp " "
#define all(x) x.begin(), x.end()

void solve()
{
	string expr, token;
	cin >> expr;
	istringstream iss(expr);
	ostringstream oss;
	vector<int> vec;

	while (getline(iss, token, '+'))
	{
		vec.push_back(stoi(token));
	}
	sort(vec.begin(), vec.end());

	for (int x : vec)
	{
		oss << x << '+';
	}
	string ans = oss.str();
	ans.pop_back();

	cout << ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
