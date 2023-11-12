#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    vector<int> costs(3);
    costs[0] = 5 * x;
    costs[1] = 2 * y + x;
    costs[2] = 3 * x + y;
    sort(costs.begin(), costs.end());
    cout << costs[0];
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