#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int count = 0;
    while (n.size() > 1)
    {
        count++;
        int sum = 0;
        for (int i = 0; i < n.size(); i++)
        {
            sum += n[i] - '0';
        }
        n = to_string(sum);
    }
    cout << count;
    return 0;
}