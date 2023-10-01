#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    if (sum % 2 == 0)
    {
        cout << sum;
    }
    else
    {
        sort(a, a + n);
        int noOfDeduction = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 1)
            {
                noOfDeduction = a[i];
                break;
            }
        }
        if (noOfDeduction)
        {
            cout << sum - noOfDeduction;
        }
        else
        {
            cout << noOfDeduction;
        }
    }
    return 0;
}