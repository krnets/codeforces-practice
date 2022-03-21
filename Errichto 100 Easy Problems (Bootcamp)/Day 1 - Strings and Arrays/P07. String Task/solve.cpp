#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln "\n"
#define sp " "
#define all(x) x.begin(), x.end()

void solve()
{
	string word;
	cin >> word;
	auto it = word.begin();
	string vowels = "aeiouy";
	ostringstream oss;

	for (char& c : word)
	{
		if (isalpha(c))
		{
			c = tolower(c);

			if (find(all(vowels), c) == vowels.end())
			{
				oss << '.' << c;
			}
		}
	}
	cout << oss.str();
}

int main()
{
	FIO;
	solve();
	return 0;
}
