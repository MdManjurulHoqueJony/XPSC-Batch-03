#include <bits/stdc++.h>
using namespace std;

int a[200][200];

long long calculate(int i, int j, int n, int m)
{
    long long result = 0;
    int inc = 0;
    while ((i - inc) > -1 && (j - inc) > -1)
    {
        result += a[i - inc][j - inc];
        inc++;
    }
    inc = 0;
    while ((i - inc) > -1 && (j + inc) < m)
    {
        result += a[i - inc][j + inc];
        inc++;
    }
    inc = 0;
    while ((i + inc) < n && (j - inc) > -1)
    {
        result += a[i + inc][j - inc];
        inc++;
    }
    inc = 0;
    while ((i + inc) < n && (j + inc) < m)
    {
        result += a[i + inc][j + inc];
        inc++;
    }
    return result - 3 * a[i][j];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum = max(sum, calculate(i, j, n, m));
            }
        }
        cout << sum << '\n';
    }
    return 0;
}