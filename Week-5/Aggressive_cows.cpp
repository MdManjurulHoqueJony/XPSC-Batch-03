#include <bits/stdc++.h>
using namespace std;

bool isValid(int diff, int a[], int n, int c)
{
    int cnt = 1;
    int last = 0;
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[last]) >= diff)
        {
            cnt++;
            last = i;
        }
    }
    return cnt >= c;
}

void solve()
{
    int n, c;
    cin >> n >> c;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int l = 0, r = INT_MAX, ans;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (isValid(mid, a, n, c))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
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