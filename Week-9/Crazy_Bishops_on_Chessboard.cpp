#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n <= 2)
    {
        cout << 0;
        return;
    }
    int num = n / 2;
    if ((n & 1) == 0)
    {
        cout << (num - 1) + 2 + ((num - 2) * 2);
    }
    else
    {
        cout << num + 1 + ((num - 1) * 2);
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