#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    vector<int> aNotX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != x)
        {
            aNotX.push_back(a[i]);
        }
    }
    for (auto i : aNotX)
    {
        cout << i << " ";
    }
    return 0;
}