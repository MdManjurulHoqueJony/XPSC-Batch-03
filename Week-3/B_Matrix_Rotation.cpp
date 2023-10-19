#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a[2][2], mx = 0, mn = 101;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
            if (a[i][j] > mx)
            {
                mx = a[i][j];
            }
            if (a[i][j] < mn)
            {
                mn = a[i][j];
            }
        }
    }
    if ((mx == a[0][0] && mn == a[1][1]) || (mx == a[0][1] && mn == a[1][0]) || (mx == a[1][1] && mn == a[0][0]) || (mx == a[1][0] && mn == a[0][1]))
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