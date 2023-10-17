#include <bits/stdc++.h>
using namespace std;

void solve(string temp)
{
    string s;
    cin >> s;
    if (temp.find(s) != -1)
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
    string temp = "";
    for (int i = 0; i < 18; i++)
    {
        temp += "Yes";
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve(temp);
        cout << endl;
    }
    return 0;
}