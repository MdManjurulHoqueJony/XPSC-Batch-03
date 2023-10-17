#include <bits/stdc++.h>
using namespace std;

void solve(string temp)
{
    string s;
    cin >> s;
    int count = 0;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] != temp[i])
        {
            break;
        }
        count++;
    }
    cout << count;
}

int main()
{
    int t;
    cin >> t;
    string temp = "314159265358979323846264338327";
    while (t--)
    {
        solve(temp);
        cout << endl;
    }
    return 0;
}