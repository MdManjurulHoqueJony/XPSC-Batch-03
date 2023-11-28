#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a = 1, b = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a <= n*n)
            {
                cout << a << " ";
                a += 2;
            }
            else
            {
                cout << b << " ";
                b += 2;
            }
        }
        cout << '\n';
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