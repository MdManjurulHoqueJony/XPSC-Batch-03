#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n < 4)
    {
        cout << "NO";
        return;
    }
    queue<char> q;
    for (auto c : s)
    {
        if (q.empty())
        {
            q.push(tolower(c));
        }
        else
        {
            if (tolower(c) != q.back())
            {
                q.push(tolower(c));
            }
        }
    }
    string result;
    while (!q.empty())
    {
        result += q.front();
        q.pop();
    }
    if (result == "meow")
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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