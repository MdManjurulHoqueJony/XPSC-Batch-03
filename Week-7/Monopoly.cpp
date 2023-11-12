#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a[4], mx = 0, mxI = -1, sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] > mx)
        {
            mx = a[i];
            mxI = i;
        }
    }
    if (a[mxI] > (sum - a[mxI]))
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