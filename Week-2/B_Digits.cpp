#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> remainders;
    if (k == 10)
    {
        cout << to_string(n).size();
    }
    else
    {
        while (n)
        {
            remainders.push_back(n % k);
            n /= k;
        }
        cout << remainders.size();
    }
    return 0;
}