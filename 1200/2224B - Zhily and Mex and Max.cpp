#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int mx = a[n-1];
        int mex = 0;
        for (int x : a) {
            if (x == mex)
                mex++;
        }
        int ans = n * mx;
        ans += n * mex - mex * (mex + 1) / 2;
        if (mx == mex - 1) ans++;
        cout << ans << "\n";
    }
    return 0;
}