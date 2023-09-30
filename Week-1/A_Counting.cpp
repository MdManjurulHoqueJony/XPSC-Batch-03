#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    if (b - a >= 0)
    {
        count = b - a + 1;
    }
    cout << count;
    return 0;
}