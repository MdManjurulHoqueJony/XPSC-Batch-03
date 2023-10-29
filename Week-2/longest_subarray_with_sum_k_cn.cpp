#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    long long i = 0, j = 0, sum = 0, mx = 0, n = a.size();
    while (j < n)
    {
        sum += a[j];
        while (sum > k)
        {
            sum -= a[i];
            i++;
        }
        if (sum == k)
        {
            mx = max(mx, (j - i + 1));
        }
        j++;
    }
    return mx;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    cout << longestSubarrayWithSumK(a, k);
    return 0;
}