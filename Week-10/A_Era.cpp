#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > i + 1)
            {
                count = max(count, a[i] - (i + 1));
            }
        }
        cout << count << endl;
    }
    return 0;
}