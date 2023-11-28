#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a.begin(), a.end());
    int z = a[n - 1] + a[n - 2];
    sort(b.begin(), b.end(), greater<int>());
    bool toggle = true;
    for (int i=0,j=0,k = 0; k < n; k++)
    {
        if (toggle)
        {
            c[k] = b[i++];
            toggle = !toggle;
        }
        else
        {
            c[k] = a[j++];
            toggle = !toggle;
        }
    }
    string result = "YES";
    for (int i = 0; i < n - 1; i++)
    {
        if (c[i] + c[i + 1] >= z)
        {
            result = "NO";
            break;
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