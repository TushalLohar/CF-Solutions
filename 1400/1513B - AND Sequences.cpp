#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const int MOD = 1e9 + 7;
const int N = 200000;
 
ll fact[N + 1];
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    fact[0] = 1;
    for (int i = 1; i <= N; i++)
        fact[i] = fact[i - 1] * i % MOD;
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        int x = a[0];
        for (int i = 1; i < n; i++)
            x &= a[i];
 
        int cnt = 0;
        for (int v : a)
            if (v == x)
                cnt++;
 
        if (cnt < 2) {
            cout << 0 << '\n';
            continue;
        }
 
        ll ans = 1LL * cnt * (cnt - 1) % MOD;
        ans = ans * fact[n - 2] % MOD;
 
        cout << ans << '\n';
    }
 
    return 0;
}