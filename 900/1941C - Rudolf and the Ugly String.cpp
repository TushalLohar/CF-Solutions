#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define endl '\n'
 
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
 
    for (int i = 0; i < n;)
    {
        if (i + 4 < n && s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p' && s[i + 3] == 'i' && s[i + 4] == 'e')
        {
            ans++;
            i += 5;
        }
        else if (i + 2 < n && ((s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') || (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')))
        {
            ans++;
            i += 3;
        }
        else
        {
            i++;
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