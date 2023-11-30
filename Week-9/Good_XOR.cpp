#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ones = 0, zeroes = 0;
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
            ones++;
        }
    }
    if (zeroes == ones)
    {
        cout << 0;
    }
    else if ((n & 1) == 1 || ones == 0 || n == 2)
    {
        cout << -1;
    }
    else
    {
        int ans = 0;
        if (zeroes > ones)
        {
            while (zeroes > ones)
            {
                ans++;
                zeroes--;
                ones++;
            }
        }
        else
        {
            while (zeroes < ones)
            {
                ans++;
                ones -= 2;
                zeroes += 2;
            }
            if (zeroes != ones)
            {
                ans++;
            }
        }
        cout << ans;
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