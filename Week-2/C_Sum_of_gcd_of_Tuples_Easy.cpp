#include <bits/stdc++.h>
using namespace std;

int gcd(int u, int v)
{
    while (v)
    {
        int temp = v;
        v = u % v;
        u = temp;
    }
    return u;
}

int main()
{
    int k, sum = 0;
    cin >> k;
    for (int u = 1; u <= k; u++)
    {
        for (int v = 1; v <= k; v++)
        {
            for (int w = 1; w <= k; w++)
            {
                sum += gcd(gcd(u, v), w);
            }
        }
    }
    cout << sum;
    return 0;
}