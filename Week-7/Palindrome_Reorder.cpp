#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    unordered_map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    int odd = 0;
    char mid;
    for (auto i : m)
    {
        if (i.second % 2 != 0)
        {
            odd++;
            mid = i.first;
        }
    }
    if ((n % 2 == 0 && odd != 0) || (n % 2 == 1 && odd > 1))
    {
        cout << "NO SOLUTION";
    }
    else
    {
        if (n % 2 == 1)
        {
            s[n / 2] = mid;
        }
        int i = 0, j = n - 1;
        for (auto c : m)
        {
            while (m[c.first] >= 2)
            {
                s[i] = c.first;
                s[j] = c.first;
                m[c.first] -= 2;
                i++;
                j--;
            }
        }
        cout << s;
    }
    return 0;
}