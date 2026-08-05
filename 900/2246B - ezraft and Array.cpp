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
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n == 2)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << "1 2 3";
        ll ans = 6;
        for (int i = 4; i <= n; i++)
        {
            cout << " " << ans;
            ans *= 2;
        }
        cout << endl;
    }
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