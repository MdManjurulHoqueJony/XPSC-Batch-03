#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, evenSum = 0, oddSum = 0;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        if (c[i] & 1)
        {
            oddSum += c[i];
        }
        else
        {
            evenSum += c[i];
        }
    }
    if (evenSum > oddSum)
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