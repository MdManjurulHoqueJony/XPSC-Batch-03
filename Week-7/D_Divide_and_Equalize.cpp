#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> cnt;
    for (int k = 0; k < n; k++)
    {
        int curr = a[k];
        for (int i = 2; i * i <= curr; i++)
        {
            while (curr % i == 0)
            {
                cnt[i]++;
                curr /= i;
            }
        }
        if (curr > 1)
        {
            cnt[curr]++;
        }
    }
    bool ok = true;
    for (auto [x, y] : cnt)
    {
        if (y % n != 0)
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
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