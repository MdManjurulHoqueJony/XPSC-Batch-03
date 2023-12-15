#include <bits/stdc++.h>
using namespace std;

int digSum(long long n)
{
    int res = 0;
    while (n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    long long n, s;
    cin >> n >> s;
    long long l = 1, r = n;
    long long ans = 0;
    while (l <= r)
    {
        long long mid = l + (r - l) / 2;
        if (mid - digSum(mid) >= s)
        {
            ans = max(ans, n - mid + 1);
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}