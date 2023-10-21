#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int s, i = 9;
    cin >> s;
    stack<int> number;
    while (s)
    {
        if (s < 9)
        {
            if (number.empty() || (!number.empty() && s < number.top()))
            {
                number.push(s);
                break;
            }
        }
        number.push(i);
        s -= i;
        i--;
    }
    while (!number.empty())
    {
        cout << number.top();
        number.pop();
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