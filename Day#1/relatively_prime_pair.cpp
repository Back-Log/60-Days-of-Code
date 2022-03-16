/*

Problem Link - https://codeforces.com/problemset/problem/1051/B

*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{

	int l, r;
	cin >> l >> r;
	if (!((r - l) & 1)) {cout << "NO"; return;}
	cout << "YES" << endl;
	for (int i = l; i < r; i += 2)
	{
		cout << i << " " << i + 1 << endl;
	}



}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	t = 1;
	//cin>>t;
	while (t--)
	{
		solve();
	}


	return 0;
}