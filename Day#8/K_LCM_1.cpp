#include<bits/stdc++.h>
using namespace std;
void solve()
{

  int n, k;
  cin >> n >> k;

  if (n & 1)
  {
    cout << 1 << " " << (n - 1) / 2 << " " << (n - 1) / 2 << endl;
    return;
  }
  if ((n / 2) % 2 == 0)
  {
    cout << n / 2 << " " << (n / 2) / 2 << " " << (n / 2) / 2 << endl;
    return;
  }
  cout << (n - 2) / 2 << " " << (n - 2) / 2 << " " << 2 << endl;


}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }


  return 0;
}