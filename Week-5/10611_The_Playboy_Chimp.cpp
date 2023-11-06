#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    vector<int> b(q);
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < q; i++)
    {
        auto it1 = lower_bound(a.begin(), a.end(), b[i]);
        int idx1 = it1 - a.begin();
        auto it2 = upper_bound(a.begin(), a.end(), b[i]);
        int idx2 = it2 - a.begin();
        if (idx1 <= 0 || idx1 > n)
        {
            cout << "X ";
        }
        else
        {
            cout << a[idx1-1] << " ";
        }
        if (idx2 < 0 || idx1 >= n)
        {
            cout << "X ";
        }
        else
        {
            cout << *it2;
        }
        cout << endl;
    }
    return 0;
}