#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, result = 0;
    cin >> a >> b;
    if (a > b)
    {
        result += a;
        a--;
    }
    else
    {
        result += b;
        b--;
    }
    if (a > b)
    {
        result += a;
    }
    else
    {
        result += b;
    }
    cout << result;
    return 0;
}