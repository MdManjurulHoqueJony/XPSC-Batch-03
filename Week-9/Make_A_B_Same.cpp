#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    bool count = false;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            count = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    if (a[0] != b[0] || a[n - 1] != b[n - 1])
    {
        cout << "NO";
        return;
    }
    string result = "YES";
    for (int i = 0; i < n; i++)
    {
        if ((a[i] == 1 && b[i] == 0) || (a[i] == 0 && b[i] == 1 && count == false))
        {
            result = "NO";
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