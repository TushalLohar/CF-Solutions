#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll m, b;
    cin >> m >> b;
    ll ans = 0;
    for (ll y = 0; y <= b; y++) {
        ll x = m * (b - y);
        ans = max(ans, (x + y) * (x + 1) * (y + 1) / 2);
    }
    cout << ans;
}
