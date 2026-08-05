#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
 
    unordered_map<int, int> freq;
    int mx = 0;
 
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mx = max(mx, ++freq[x]);
    }
 
    cout << n - mx << '\n';
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
}