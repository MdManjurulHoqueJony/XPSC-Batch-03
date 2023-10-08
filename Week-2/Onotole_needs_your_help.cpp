#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> p;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        p[a[i]]++;
    }
    for (auto it = p.begin(); it != p.end(); it++)
    {
        if (it->second == 1)
        {
            cout << it->first;
        }
    }
    return 0;
}