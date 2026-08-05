#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    if (s.front() != s.back())
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}