#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int wheels[n];
    for (int i = 0; i < n; i++)
    {
        cin >> wheels[i];
    }
    pair<int, string> p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p[i].first; j++)
        {
            if (p[i].second[j] == 'D')
            {
                if (wheels[i] != 9)
                {
                    wheels[i]++;
                }
                else
                {
                    wheels[i] = 0;
                }
            }
            else
            {
                if (wheels[i] != 0)
                {
                    wheels[i]--;
                }
                else
                {
                    wheels[i] = 9;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << wheels[i] << " ";
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