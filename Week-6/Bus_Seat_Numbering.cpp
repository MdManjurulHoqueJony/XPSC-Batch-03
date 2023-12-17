#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n <= 10)
    {
        cout << "Lower Double";
    }
    else if (n > 10 && n < 16)
    {
        cout << "Lower Single";
    }
    else if (n > 15 && n < 26)
    {
        cout << "Upper Double";
    }
    else
    {
        cout << "Upper Single";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << '\n';
    }
    return 0;
}