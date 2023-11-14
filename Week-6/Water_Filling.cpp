#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int b[3];
    int zc = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
        if (b[i] == 0)
        {
            zc++;
        }
    }
    if (zc >= 2)
    {
        cout << "Water filling time";
    }
    else
    {
        cout << "Not now";
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