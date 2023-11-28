#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0 || i == j)
                {
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
            if (i != n - 1)
            {
                cout << '\n';
            }
        }
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