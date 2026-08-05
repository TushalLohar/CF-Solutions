#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, mn = 1e18, mx = -1e18;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);
        }
 
        if (mn == mx) {
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";
        for (int x : a) cout << (x == mx ? 2 : 1) << " ";
        cout << "\n";
    }
}