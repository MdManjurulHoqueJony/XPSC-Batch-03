#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    set<char> st;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
        if (st.size() > 3)
        {
            count++;
            st.clear();
            st.insert(s[i]);
        }
    }
    if (!st.empty())
    {
        count++;
    }
    cout << count;
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