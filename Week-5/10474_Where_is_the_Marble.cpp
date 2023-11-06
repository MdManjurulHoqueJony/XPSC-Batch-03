#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, sl = 1;
    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)
        {
            break;
        }
        int a[n], b[q];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < q; i++)
        {
            cin >> b[i];
        }
        cout << "CASE# " << sl << ":" << endl;
        for (int i = 0; i < q; i++)
        {
            int l = 0, r = n - 1, ans = -1;
            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                if (b[i] == a[mid])
                {                    
                    ans=mid;
                    r = mid - 1;
                }
                else if (b[i] < a[mid])
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (ans==-1)
            {
                cout << b[i] << " not found" << endl;
            }
            else
            {
                cout << b[i] << " found at " << ans + 1 << endl;
            }            
        }
        sl++;
    }
    return 0;
}