#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int op = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            op++;
        }
        else
        {
            if (op <= 0 && s[i] == ')')
            {
                ans++;
            }
            else
            {
                op--;
            }
        }
    }
    cout << ans << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}