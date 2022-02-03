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
	vector<int> vecA(2 * kQmx), vecB(2 * kQmx), vecC(2 * kQmx), vecD(2 * kQmx);

	while (q--)
	{
		int row, col;
		cin >> row >> col;

		if (vecA[row] || vecB[col] || vecC[row - col + kQmx] || vecD[row + col])
			cout << "NO" << ln;
		else
		{
			cout << "YES" << ln;
			vecA[row] = 1;
			vecB[col] = 1;
			vecC[row - col + kQmx] = 1;
			vecD[row + col] = 1;
		}
	}
}

int main()
{
	FIO;
	solve();
	return 0;
}
