#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int mn = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = 0;
            for (int k = 0; k < m; k++)
            {
                sum += abs((s[i][k] - 'a') - (s[j][k] - 'a'));
            }
            mn = min(mn, sum);
        }
    }
    cout << mn;
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