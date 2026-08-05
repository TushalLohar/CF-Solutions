#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        ll n, k;
        cin >> n >> k;
 
        map<ll, ll> cnt;
 
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            ll need = (k - x % k) % k;
            if (need)
                cnt[need]++;
        }
 
        ll ans = 0;
 
        for (auto [need, freq] : cnt) {
            ans = max(ans, need + (freq - 1) * k + 1);
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}