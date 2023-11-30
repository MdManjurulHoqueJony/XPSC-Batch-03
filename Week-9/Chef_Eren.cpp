#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            sum += b;
        }
        else
        {
            sum += a;
        }
    }
    cout << sum;
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