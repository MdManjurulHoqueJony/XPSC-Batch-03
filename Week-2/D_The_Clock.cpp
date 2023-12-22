#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
    return s[0] == s[4] && s[1] == s[3];
}

void solve()
{
    string s;
    cin >> s;
    int x;
    cin >> x;
    int h = x / 60, m = x % 60;
    int ans = 0;
    map<string, bool> visited;
    while (!visited[s])
    {
        ans += (checkPalindrome(s));
        visited[s] = true;

        int hh = ((s[0] - '0') * 10) + (s[1] - '0');
        int mm = ((s[3] - '0') * 10) + (s[4] - '0');

        mm += m;
        if (mm > 59)
        {
            hh++;
        }
        mm %= 60;

        hh += h;
        hh %= 24;

        s[0] = ('0' + (hh / 10));
        s[1] = ('0' + (hh % 10));

        s[3] = ('0' + (mm / 10));
        s[4] = ('0' + (mm % 10));
    }
    cout << ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << '\n';
    }
    return 0;
}
