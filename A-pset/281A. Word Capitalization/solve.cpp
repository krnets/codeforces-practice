#include <iostream>
using namespace std;
 
#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
 
void solve()
{
	string s;
	cin >> s;
 
	if (!s.empty())
		s.front() = toupper(s.front());
 
	cout << s;
}
 
int main()
{
	FIO;
	solve();
	return 0;
}