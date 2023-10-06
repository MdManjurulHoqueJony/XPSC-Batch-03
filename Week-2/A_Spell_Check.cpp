#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s, t = "Timur";
    cin >> s;
    if (n != 5)
    {
        cout << "NO";
    }
    else
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
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