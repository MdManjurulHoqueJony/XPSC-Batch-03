#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 2;)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
        {
            count++;
            i += 3;
        }
        else
        {
            i++;
        }
    }
    cout << count;
    return 0;
}