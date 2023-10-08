#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int i, j;
        cin >> i >> j;
        long long sum = 0;
        for (int u = i; u <= j; u++)
        {
            sum += a[u];
        }
        cout << sum << endl;
    }
    return 0;
}