#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n], mn = INT_MAX, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += (a[i] - mn);
    }
    cout << sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}