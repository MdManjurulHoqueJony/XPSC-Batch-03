#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, zeroes = 0, nonZeroes = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            zeroes++;
        }
        else
        {
            nonZeroes++;
        }
    }
    int ans;
    if (zeroes == 0)
    {
        ans = 0;
    }
    else
    {
        if (nonZeroes >= zeroes - 1)
        {
            ans = 0;
        }
        else
        {
            int mx = *max_element(a.begin(), a.end());
            if (mx == 1)
            {
                ans = 2;
            }
            else
            {
                ans = 1;
            }
        }
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
        cout << endl;
    }
    return 0;
}