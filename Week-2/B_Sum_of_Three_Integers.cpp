#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, s, count = 0;
    cin >> k >> s;
    for (int u = 0; u <= k; u++)
    {
        for (int v = 0; v <= k; v++)
        {
            if ((s - (u + v)) >= 0 && (s - (u + v)) <= k)
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}