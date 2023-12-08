#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    if ((a1 + a3 - 2 * a2) % 3 == 0)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
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