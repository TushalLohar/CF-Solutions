#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<pair<int, int>> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end());
        int mx = 0;
        for(int i = 0; i < n; i++) mx = max(mx, i ^ a[i].second);
        if(mx == 0) cout << 0 << '\n';
        else cout << (1 << (31 - __builtin_clz(mx))) << '\n';
    }
    return 0;
}
