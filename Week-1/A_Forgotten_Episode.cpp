#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n-1];
    for (int i = 0; i < n-1; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int missingEpisode = n;
    for (int i = 1; i < n; i++)
    {

        if (i != a[i - 1])
        {
            missingEpisode = i;
            break;
        }
    }
    cout << missingEpisode;
    return 0;
}