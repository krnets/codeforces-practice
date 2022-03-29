#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

int solve()
{
	string keyboard, word;
	cin >> keyboard >> word;
	int result = 0;
	int last_pos = keyboard.find(word.front());

	for (int i = 1; i < word.length(); i++)
	{
		int pos = keyboard.find(word[i]);
		result += abs(pos - last_pos);
		last_pos = pos;
	}

	return result;
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
