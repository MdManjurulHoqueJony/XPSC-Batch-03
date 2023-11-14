#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), d(n);
    string result = "YES";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (a[i] < b[i])
        {
            result = "NO";
        }
        else
        {
            d[i] = a[i] - b[i];
        }
    }
    if (result != "NO")
    {
        int mx = d[0];
        for (int i = 1; i < n; i++)
        {
            if (d[i] > mx)
            {
                mx = d[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if ((a[i] - mx) < b[i] && b[i] > 0)
            {
                result = "NO";
            }
        }
    }
    cout << result;
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