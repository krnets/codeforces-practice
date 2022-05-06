#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

bool next_prime(int n)
{
	if (n == 2 || n == 3 || n == 5) return true;
	if (n < 2 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0) return false;

	for (int i = 5; i <= sqrt(n); i += 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

void solve()
{
	int n, m;
	cin >> n >> m;

	int p = n + 1;

	while(!next_prime(p))
		++p;

	cout << (p == m ? "YES" : "NO");

}

int main()
{
	FIO;
	solve();
}
