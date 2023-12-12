#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<char> stk;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (stk.empty())
        {
            stk.push(s[i]);
        }
        else
        {
            if (s[i] == 'B')
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
    }
    cout << stk.size();
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