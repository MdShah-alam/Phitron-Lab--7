#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const int MAXN = 1e5+10;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int cnt = -1;
        for (int i = 0;i < s.length();i++)
        {
            if (s[i] == '8')
            {
                cnt = i;
                break;
            }
        }
        if (cnt == -1)
            cout << "NO" << endl;
        else if (s.length() - cnt < 11)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
