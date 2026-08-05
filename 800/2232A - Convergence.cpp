#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        vector<long long> sixseven(n);
        for (auto &x : sixseven) cin >> x;
 
        sort(sixseven.begin(), sixseven.end());
 
        int ans = n;
 
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && sixseven[j] == sixseven[i]) j++;
 
            int L = i;
            int R = n - j;
 
            ans = min(ans, max(L, R));
 
            i = j;
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}