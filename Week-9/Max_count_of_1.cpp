#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, count1 = 0, count2 = 0;
    cin >> n;
    string s, x = "0", y = "1";
    cin >> s;
    for (int i = 1; i < n; i++)
    {
        x += (s[i - 1] == x[i - 1]) ? "0" : "1";
        y += (s[i - 1] == y[i - 1]) ? "0" : "1";
    }
    for (int i = 0; i < n; i++)
    {
        count1 += (x[i] == '1') ? 1 : 0;
        count2 += (y[i] == '1') ? 1 : 0;
    }
    cout << max(count1, count2);
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