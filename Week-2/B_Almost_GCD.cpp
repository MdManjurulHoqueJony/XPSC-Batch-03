#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    map<int, int> mp;
    for (int i = 2; i <= mx; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] % i == 0)
            {
                mp[i]++;
            }
        }
    }
    int mxFreq = INT_MIN;
    int result;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > mxFreq)
        {
            mxFreq = it->second;
            result = it->first;
        }
    }
    cout << result;
    return 0;
}