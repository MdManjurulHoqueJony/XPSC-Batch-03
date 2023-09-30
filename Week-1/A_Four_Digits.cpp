#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int temp = n;
    while (temp / 10)
    {
        count++;
        temp /= 10;
    }
    for (int i = 0; i < 4 - (count + 1); i++)
    {
        cout << "0";
    }
    cout << n;
    return 0;
}