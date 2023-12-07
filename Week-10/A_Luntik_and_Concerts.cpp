#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, total = 0;
    cin >> a >> b >> c;
    total = a + 2 * b + 3 * c;
    if (total & 1)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
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