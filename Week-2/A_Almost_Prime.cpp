#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    bool result = true;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            result = false;
        }
    }
    return result;
}

bool isAlmostPrime(int x)
{
    int count = 0;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0 && isPrime(i))
        {
            count++;
        }
    }
    return count == 2;
}

int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (isAlmostPrime(i))
        {
            count++;
        }
    }
    cout << count;
    return 0;
}