
/*

Problem Link -https://www.codechef.com/JAN18/problems/KCON
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long


#define pb push_back
void solve()
{
    int n, k;

    cin >> n >> k;


    int sum = 0;
    vector<int>v(2 * n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[i] = a;
        sum += a;

    }
    int st = 0;

    for (int i = n; i < 2 * n; i++)
    {
        v[i] = v[st++];
    }

    int mx = INT_MIN;
    int curr = 0;
    // show(v);
    int ok = 2 * n;
    if (k == 1) ok = n;
    for (int i = 0; i < ok; i++)
    {
        curr += v[i];
        mx = max(mx, curr);
        if (curr < 0) curr = 0;
    }
    if (sum >= 0 and k > 1)
    {
        mx += sum * (k - 2);
    }
    cout << mx << endl;


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