#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (size_t i = 0; i < s.size(); i += 2)
    {
        cout << s[i];
    }
    return 0;
}