#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), frq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        frq[a[i]]++;
    }
    sort(frq.begin(), frq.end(), greater<int>());
    cout << a.size() - frq[0];
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