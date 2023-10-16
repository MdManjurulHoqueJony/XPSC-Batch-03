#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int i = 1;
    while (i * 2 <= n)
    {
        i *= 2;
    }
    cout << (i - 1);
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