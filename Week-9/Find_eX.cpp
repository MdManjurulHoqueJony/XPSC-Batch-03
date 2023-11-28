#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a + 1) % b == (c + 1) % d)
    {
        cout << 1;
    }
    else
    {
        cout << ((b * d) / __gcd(b, d)) - (a % b);
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