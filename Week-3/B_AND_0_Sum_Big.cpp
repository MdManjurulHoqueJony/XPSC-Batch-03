#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;

void solve()
{
    ll n, k, ans = 1;
    cin >> n >> k;
    while (k--)
    {
        ans = ((ans % mod) * (n % mod)) % mod;
    }
    cout << ans;
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