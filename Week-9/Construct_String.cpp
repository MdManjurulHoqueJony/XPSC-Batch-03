#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string u;
    cin >> u;
    int tempCount = 1;
    char c = u[0];
    string s = "";
    for (int i = 1; i < n; i++)
    {
        if (c == u[i])
        {
            tempCount++;
        }
        else
        {
            if ((tempCount & 1) == 0)
            {
                s += c;
                s += c;
            }
            else
            {
                s += c;
            }
            c = u[i];
            tempCount = 1;
        }
    }
    if ((tempCount & 1) == 0)
    {
        s += c;
        s += c;
    }
    else
    {
        s += c;
    }
    cout << s;
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