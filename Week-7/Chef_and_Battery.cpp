#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 50)
    {
        cout << "0";
        return;
    }
    int minCounts = 0;
    while (n != 50)
    {
        while (n > 50)
        {
            n -= 3;
            minCounts++;
        }
        while (n < 50)
        {
            n += 2;
            minCounts++;
        }
    }
    cout << minCounts;
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