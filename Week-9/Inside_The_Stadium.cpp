#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sum = 0, count = 0;
    cin >> n;
    vector<int> r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
        sum += r[i];
        if (i+1 == sum)
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