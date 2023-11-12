#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    int odd = 0;
    for (auto i : m)
    {
        if (i.second % 2 != 0)
        {
            odd++;
        }
    }
    if ((n % 2 == 0 && odd != 0) || (n % 2 == 1 && odd > 1))
    {
        cout << 0;
    }
    else
    {
        if (n % 2 == 0 || (n % 2 == 1 and m.size() >= 2))
        {
            cout << 1;
        }
        else
        {
            cout << 2;
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