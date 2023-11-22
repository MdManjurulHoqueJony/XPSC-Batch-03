#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), evens, odds;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if ((a[i] & 1) == 0)
        {
            evens.push_back(a[i]);
        }
        else
        {
            odds.push_back(a[i]);
        }
    }
    sort(evens.begin(), evens.end());
    sort(odds.begin(), odds.end());
    bool okE = true, okO = true;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] & 1) == 0)
        {
            continue;
        }
        if (odds.empty() || odds[0] >= a[i])
        {
            okE = false;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if ((a[i] & 1) != 0)
        {
            continue;
        }
        if (odds.empty() || odds[0] >= a[i])
        {
            okO = false;
            break;
        }
    }
    if (okE || okO)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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