#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (100 - a > 200 - 2 * b)
    {
        cout << "SECOND";
    }
    else if (100 - a < 200 - 2 * b)
    {
        cout << "FIRST";
    }
    else
    {
        cout << "BOTH";
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