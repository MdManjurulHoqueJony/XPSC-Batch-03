#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    if (x % 10 >= 5)
    {
        cout << 100 - (((x / 10) * 10) + 10);
    }
    else if (x % 10 < 5)
    {
        cout << 100 - (x / 10) * 10;
    }
    else
    {
        cout << 100 - x;
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