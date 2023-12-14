#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    sort(w.begin(), w.end());
    int k = 0;
    for (int s = 1; s <= 100; s++)
    {
        int cnt = 0;
        for (int i = 0, j = n - 1; i < j;)
        {
            if (w[i] + w[j] > s)
            {
                j--;
            }
            else if (w[i] + w[j] < s)
            {
                i++;
            }
            else
            {
                cnt++;
                i++;
                j--;
            }
        }
        k = max(k, cnt);
    }
    cout << k;
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