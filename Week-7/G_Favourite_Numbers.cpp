#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a;
    cin >> a;
    if (a % 2 == 0 && a % 7 == 0)
    {
        cout << "Alice";
    }
    else if (a % 2 == 1 && a % 9 == 0)
    {
        cout << "Bob";
    }
    else
    {
        cout << "Charlie";
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