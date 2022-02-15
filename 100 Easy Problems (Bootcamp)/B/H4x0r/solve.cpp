#include <iostream>
#include <map>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve()
{
	string s;
	cin >> s;
	map<char, int> map{{'a', 4}, {'i', 1}, {'e', 3}, {'o', 0}, {'s', 5}};

	for (char& c : s)
		if (map.count(c))
			c = map[c] + '0';

	cout << s;
}

int main()
{
	FIO;
	solve();
	return 0;
}
