#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (s[0] == '0')
    {
        s[0] = '1';
        k -= 1;
    }
    for (int i = 0; i < k; i++)
    {
        s += "0";
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