#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int h, x, y, count = 1;
    cin >> h >> x >> y;
    h -= y;
    while (h > 0)
    {
        h -= x;
        count++;
    }
    cout << count;
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