#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> strings(n);
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> strings[i];
        mp[strings[i]] = true;
    }
    for (int i = 0; i < n; i++)
    {
        bool ok = false;
        for (int j = 1; j < strings[i].length(); j++)
        {
            string prefix = strings[i].substr(0, j), suffix = strings[i].substr(j, strings[i].length() - j);
            if (mp[prefix] && mp[suffix])
            {
                ok = true;
            }
        }
        cout << ok;
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