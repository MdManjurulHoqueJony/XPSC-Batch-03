#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    if ((n % 2 == 0 && x >= n / 2) || (n % 2 == 1 && x >= n / 2 + 1))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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