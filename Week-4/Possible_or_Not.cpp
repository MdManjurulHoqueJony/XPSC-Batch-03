#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, b;
    cin >> n >> b;
    int a[n];
    int andResult = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if ((a[i] & b) == b)
        {
            andResult &= a[i];
        }
    }
    if (andResult == b)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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