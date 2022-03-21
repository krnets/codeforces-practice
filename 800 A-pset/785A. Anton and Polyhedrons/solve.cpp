#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ln '\n'
#define sp ' '

void solve()
{
	int n;
	cin >> n;
	int total = 0;

	map<string, int> faces_map{
		{"Tetrahedron", 4},
		{"Cube", 6},
		{"Octahedron", 8},
		{"Dodecahedron", 12},
		{"Icosahedron", 20}
	};

	while (n--)
	{
		string polyhedron;
		cin >> polyhedron;
		total += faces_map[polyhedron];
	}

	cout << total;
}

int main()
{
	FIO;
	solve();
	return 0;
}
