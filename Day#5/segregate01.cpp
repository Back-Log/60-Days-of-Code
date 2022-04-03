/*
  Life is onetime offer ,use it well
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (!arr[i]) zero++;
    }

    for (int i = 0; i < zero; i++)
    {
        arr[i] = 0;
    }
    for (int i = zero; i < n; i++)
    {
        arr[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
//one other apporoch to use two pointer