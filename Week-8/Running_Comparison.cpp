#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, count = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((a[i] * 2 >= b[i]) && (b[i] * 2 >= a[i]))
        {
            count++;
        }
    }
    cout << count;
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