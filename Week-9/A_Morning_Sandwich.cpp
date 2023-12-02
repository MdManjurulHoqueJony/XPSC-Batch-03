#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int b, c, h, sum = 0;
    cin >> b >> c >> h;
    if (c + h >= b)
    {
        cout << 2 * b - 1;
    }
    else
    {
        cout << 2 * (c + h) + 1;
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