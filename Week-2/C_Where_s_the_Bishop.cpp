#include <bits/stdc++.h>
using namespace std;

bool valid(int i, int j)
{
    return i + 1 >= 0 && i + 1 <= 7 && i - 1 >= 0 && i - 1 <= 7 && j + 1 >= 0 && j + 1 <= 7 && j - 1 >= 0 && j - 1 <= 7;
}

void solve()
{
    char ch[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> ch[i][j];
        }
    }
    int r, c;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (ch[i][j] == '#')
            {
                if (valid(i, j))
                {
                    if (ch[i + 1][j - 1] == '#' && ch[i - 1][j - 1] == '#' && ch[i + 1][j + 1] == '#' && ch[i - 1][j + 1] == '#')
                    {
                        r = i;
                        c = j;
                        break;
                    }
                }
            }
        }
    }
    cout << r + 1 << " " << c + 1;
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