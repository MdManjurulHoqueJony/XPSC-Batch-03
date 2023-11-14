#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if (a >= x && b >= y)
    {
        cout << "YES";
    }
    else if (a >= x)
    {
        if (b + c >= y)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else if (b >= y)
    {
        if (a + c >= x)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        if ((x - a) <= c && (b + c - (x - a)) >= y)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
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