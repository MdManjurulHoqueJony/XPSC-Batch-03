#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        cin >> s;
        int cnt[26] = {0};
        for (int i = 0; i < n; i++)
        {
            cnt[s[i] - 'A']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] > 0)
            {
                cnt[i]++;
            }
        }
        int sum = 0;
        for (int i = 0; i < 26; i++)
        {
            sum += cnt[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}