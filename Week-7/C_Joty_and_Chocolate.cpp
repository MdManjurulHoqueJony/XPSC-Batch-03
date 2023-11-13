#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    ll n, a, b, p, q, red = 0, blue = 0;
    cin >> n >> a >> b >> p >> q;
    ll l = lcm(a, b);
    if (p > q)
    {
        red = n / a;
        b = (n / b) - (n / l);
    }
    else
    {
        red = (n / a) - (n / l);
        b = n / b;
    }
    cout << (red * p) + (b * q);
    return 0;
}