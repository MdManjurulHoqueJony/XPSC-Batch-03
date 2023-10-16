#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << a[0];
        return;
    }
    int result = a[0];
    for (int i = 1; i < n; i++)
    {
        result ^= a[i];
    }
    int sum = a[0] ^ result;
    for (int i = 1; i < n; i++)
    {
        sum ^= a[i] ^ result;
    }
    if (sum != 0)
    {
        cout << "-1";
        return;
    }
    cout << result;
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