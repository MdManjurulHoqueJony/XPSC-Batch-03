#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, result = "None";
    cin >> s;
    map<char, int> count;
    for (auto ch : s)
    {
        count[ch]++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (count[i] == 0)
        {
            result = i;
            break;
        }
    }
    cout << result;
    return 0;
}