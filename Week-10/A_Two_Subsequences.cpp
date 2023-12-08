#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    char mn = s[0];
    int index = 0;
    for (size_t i = 1; i < s.size(); i++)
    {
        if (s[i] < mn)
        {
            mn = s[i];
            index = i;
        }
    }
    s.replace(index, 1, "");
    cout << mn << " " << s;
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