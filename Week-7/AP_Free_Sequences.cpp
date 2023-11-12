#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unordered_set<int> hashSet(a, a + n);
    string result = "Yes";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int diff = a[j] - a[i];
            if (hashSet.find(a[j] + diff) != hashSet.end())
            {
                result = "No";
            }
        }
    }
    cout << result;
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