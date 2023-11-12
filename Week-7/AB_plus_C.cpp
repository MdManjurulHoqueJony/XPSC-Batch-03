#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x;
    cin >> x;
    if (x == 1)
    {
        cout << -1;
    }
    else if (x <= 1000000)
    {
        cout << 1 << " " << 1 << " " << x - 1;
    }
    else if (x > 1000000 && x % 1000000 != 0)
    {
        cout << 1000000 << " " << x / 1000000 << " " << x % 1000000;
    }
    else
    {
        cout << 1000000 << " " << x / 1000000 - 1 << " " << 1000000;
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