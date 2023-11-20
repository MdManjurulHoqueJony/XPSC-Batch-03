#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, q;
    cin >> n >> q;
    vector<long long> a(n);
    int cnt0 = 0, cnt1 = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if ((a[i] & 1) == 0)
        {
            cnt0++;
        }
        else
        {
            cnt1++;
        }
        sum += a[i];
    }
    while (q--)
    {
        int type, x;
        cin >> type >> x;
        if (type == 0)
        {
            sum += (x * cnt0);
            if ((x & 1) != 0)
            {
                cnt0 = 0;
                cnt1 = n;
            }
        }
        else
        {
            sum += (x * cnt1);
            if ((x & 1) != 0)
            {
                cnt0 = n;
                cnt1 = 0;
            }
        }
        cout << sum;
        if (q != 0)
        {
            cout << '\n';
        }
    }
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