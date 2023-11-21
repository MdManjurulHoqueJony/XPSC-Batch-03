#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1[s1.size() - 1] != 'S' && s2[s2.size() - 1] == 'S')
    {
        cout << '>';
    }
    else if (s1[s1.size() - 1] == 'S' && s2[s2.size() - 1] != 'S')
    {
        cout << '<';
    }
    else if (s1[s1.size() - 1] != 'L' && s2[s2.size() - 1] == 'L')
    {
        cout << '<';
    }
    else if (s1[s1.size() - 1] == 'L' && s2[s2.size() - 1] != 'L')
    {
        cout << '>';
    }
    else
    {
        if (s1[s1.size() - 1] == 'S')
        {
            if (s1.size() > s2.size())
            {
                cout << '<';
            }
            else if (s1.size() < s2.size())
            {
                cout << '>';
            }
            else
            {
                cout << '=';
            }
        }
        else if (s1[s1.size() - 1] == 'L')
        {
            if (s1.size() > s2.size())
            {
                cout << '>';
            }
            else if (s1.size() < s2.size())
            {
                cout << '<';
            }
            else
            {
                cout << '=';
            }
        }
        else
        {
            cout << '=';
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}