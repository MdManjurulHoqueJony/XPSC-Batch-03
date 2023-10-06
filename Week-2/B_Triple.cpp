#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = -1;
    for (int i = 0; i < n - 2; i++)
    {
        if (a[i] == a[i + 1] && a[i] == a[i + 2])
        {
            ans = a[i];
            break;
        }
    }
    cout << ans;
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