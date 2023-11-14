#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    if (y % x == 0)
    {
        cout << 1 << " " << y / x;
    }
    else
    {
        cout << 0 << " " << 0;
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