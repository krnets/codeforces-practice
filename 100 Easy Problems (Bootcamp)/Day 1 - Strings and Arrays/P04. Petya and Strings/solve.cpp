#include <iostream>
#include <numeric>
#include <string>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln "\n"
#define sp " "
#define all(x) x.begin(), x.end()

void solve()
{
	string wordA, wordB;
	cin >> wordA >> wordB;
	int ans = 0;

	for (int i = 0; i < wordA.length(); ++i)
	{
		if (tolower(wordA[i]) < tolower(wordB[i]))
		{
			ans = -1;
			break;
		}
		if (tolower(wordA[i]) > tolower(wordB[i]))
		{
			ans = 1;
			break;
		}
	}

	cout << ans;
}

int main()
{
	FIO;
	solve();
	return 0;
}
