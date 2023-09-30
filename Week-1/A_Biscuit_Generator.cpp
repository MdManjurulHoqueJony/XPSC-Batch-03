#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    if (t < a)
    {
        cout << "0";
        return 0;
    }
    int count = 0;
    for (int i = t; i >= a; i -= a)
    {
        count += b;
    }
    cout << count;
    return 0;
}