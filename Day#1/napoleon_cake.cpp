/*

Problem Link - https://codeforces.com/contest/1501/problem/B
Very good problem

*/


#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

    }
    int mx = 0;
    for (int i = n - 1; i >= 0; i--)
    {

        mx = max(mx, arr[i]);
        if (mx > 0)
        {
            arr[i] = 1;
        }
        mx--;

    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << 1 << " ";
        }
    }
    cout << endl;

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