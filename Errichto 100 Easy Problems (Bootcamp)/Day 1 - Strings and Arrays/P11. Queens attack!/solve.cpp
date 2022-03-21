#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ln "\n"
#define sp " "
#define all(x) x.begin(), x.end()

void solve()
{
	int n, q;
	cin >> n >> q;
	constexpr int kQmx = 100'000;
	vector<bool> rows(2 * kQmx), cols(2 * kQmx), diagFall(2 * kQmx), diagRise(2 * kQmx);

	while (q--)
	{
		int row, col;
		cin >> row >> col;

		if (rows[row] || cols[col] || diagFall[row + col] || diagRise[row - col + n])
			cout << "NO" << ln;
		else
		{
			cout << "YES" << ln;
			rows[row] = true;
			cols[col] = true;
			diagFall[row + col] = true;
			diagRise[row - col + n] = true;
		}
	}
}

int main()
{
	FIO;
	solve();
	return 0;
}
