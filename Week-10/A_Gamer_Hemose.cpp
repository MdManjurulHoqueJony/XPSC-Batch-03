#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int ans = 2 * (h / (a[0] + a[1]));
    h %= a[0] + a[1];
    if (h > 0)
    {
        if (h <= a[0])
        {
            ans += 1;
        }
        else
        {
            ans += 2;
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