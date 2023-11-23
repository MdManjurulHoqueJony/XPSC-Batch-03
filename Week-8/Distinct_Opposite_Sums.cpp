#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
    return (a > b);
}
void solve()
{
    int n;
    cin >> n;
    stack<int> s;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
        {
            s.push(i + 1);
        }
        else
        {
            v.push_back(i + 1);
        }
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
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