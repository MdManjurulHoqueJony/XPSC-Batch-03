#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n], c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            c[i] = 1;
        }
        else
        {
            c[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
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