#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (x == n)
    {
        sort(a.begin(), a.end());
        cout << a[0]-1;
    }
    else
    {
        sort(a.begin(), a.end(), greater<int>());
        cout << a[x - 1] - 1;
    }
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