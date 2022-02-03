#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ln "\n";
#define sp " ";

void solve()
{
	int n;
	cin >> n;
	vector<string> words;
	string word;

	while (n--)
	{
		cin >> word;
		words.push_back(word);
	}

	for (auto& word : words)
	{
		if (word.length() > 10)
		{
			cout << word.front() << word.length() - 2 << word.back() << ln;
		}
		else
		{
			cout << word << ln;
		}
	}
}

int main()
{
	FIO;
	solve();
	return 0;
}
