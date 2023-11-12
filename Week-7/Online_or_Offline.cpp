#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double n, m;
    cin >> n >> m;
    double discountedN = (90 * n) / 100;
    if (discountedN < m)
    {
        cout << "ONLINE";
    }
    else if (discountedN > m)
    {
        cout << "DINING";
    }
    else
    {
        cout << "EITHER";
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