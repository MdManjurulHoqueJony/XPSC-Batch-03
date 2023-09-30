#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    long double result = ((a - b) / (long double)a) * 100;
    cout << result;
    return 0;
}