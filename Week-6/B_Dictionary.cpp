#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    cout << 25 * (s[0] - 'a') + (s[1] < (int)s[0] ? abs('a' - s[1]) + 1 : s[1] - 'a');
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