#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a[4], count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        if (i > 0 && a[i] > a[0])
        {
            count++;
        }
    }
    cout << count;
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