#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve()
{
    int n;
    cin >> n;
 
    vector<ll> a(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    ll pref = 0;
    ll man = LLONG_MAX;
 
    for (int i = 0; i < n; i++)
    {
        pref += a[i];
 
        man = min(man, pref / (i + 1));
 
        cout << man << " ";
    }
 
    cout << '\n';
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