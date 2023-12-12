#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k = 1;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    k += a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] == 0 && a[i - 1] == 0)
        {
            k = -1;
            break;
        }
        else if (a[i] == 0 && a[i - 1] == 1)
        {
            k += 0;
        }
        else if (a[i] == 1 && a[i - 1] == 0)
        {
            k += 1;
        }
        else
        {
            k += 5;
        }
    }
    cout << k;
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