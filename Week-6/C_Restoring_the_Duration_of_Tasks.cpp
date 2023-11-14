#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> s(n), f(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << f[i] - s[i] << " ";
        }
        else
        {
            if (f[i - 1] <= s[i])
            {
                cout << f[i] - s[i] << " ";
            }
            else
            {
                cout << f[i] - f[i - 1] << " ";
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