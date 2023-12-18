#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a = 0, b = 0;
    cin >> n;
    string s;
    cin >> s;
    char server = 'A';
    for (int i = 0; i < n; i++)
    {
        if (s[i] == server)
        {
            if (s[i] == 'A')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        server = s[i];
    }
    cout << a << " " << b;
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