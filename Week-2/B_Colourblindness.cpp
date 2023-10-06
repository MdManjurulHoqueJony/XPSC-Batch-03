#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B' || s[i] == 'G')
        {
            s[i] = 'X';
        }
        if (t[i] == 'B' || t[i] == 'G')
        {
            t[i] = 'X';
        }
    }
    if (s == t)
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