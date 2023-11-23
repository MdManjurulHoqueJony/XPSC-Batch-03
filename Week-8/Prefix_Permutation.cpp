#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if ((n&1)==1)
    {
        cout<<-1;
    }
    else
    {
        for (int i = 1; i <= n; i+=2)
        {
            cout<<i+1<<" "<<i<<" ";
        }        
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