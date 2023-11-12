#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n], mx = 0, secondMx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != mx)
        {
            secondMx = max(secondMx, a[i]);
        }
    }
    cout << mx + secondMx;
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