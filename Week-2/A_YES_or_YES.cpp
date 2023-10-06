#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t = "YES";
    cin >> s;
    for (int i = 0; i < 3; i++)
    {
        s[i] = toupper(s[i]);
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