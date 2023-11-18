#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n), u(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        u[i] = v[i];
    }
    sort(u.begin(), u.end());
    int m;
    cin >> m;
    vector<long long> pv(n), pu(n);
    pv[0] = v[0];
    pu[0] = u[0];
    for (int i = 1; i < n; i++)
    {
        pv[i] = pv[i - 1] + v[i];
        pu[i] = pu[i - 1] + u[i];
    }
    while (m--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1)
        {
            cout << (l > 1 ? pv[r - 1] - pv[l - 2] : pv[r - 1]);
        }
        else
        {
            cout << (l > 1 ? pu[r - 1] - pu[l - 2] : pu[r - 1]);
        }
        cout << '\n';
    }
    return 0;
}