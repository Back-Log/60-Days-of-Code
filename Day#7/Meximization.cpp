#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{

  int n;
  cin >> n;
  set<int>st;
  int arr[101];
  memset(arr, 0, sizeof(arr));
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    arr[a]++;
    st.insert(a);
  }
  vector<int>ans;
  for (auto i : st)
  {
    ans.pb(i);
  }
  while (true)
  {

    bool ok = false;

    for (int i = 0; i <= 100; i++)
    {
      if (arr[i] > 1)
      {
        ans.pb(i);
        arr[i] -= 1;
      }
    }
    for (int i = 0; i <= 100; i++)
    {
      if (arr[i] > 1)
      {
        ok = true;
      }
    }
    if (!ok) break;


  }
  for (auto i : ans) {
    cout << i << " ";
  }
  cout << endl;


}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  t = 1;
  cin>>t;
  while (t--)
  {
    solve();
  }


  return 0;
}