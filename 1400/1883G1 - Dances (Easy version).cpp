#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<long long> a(n), b(n);
 
        for (int i = 1; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
 
        long long ans = 0;
 
        for (int i = 1; i <= m; i++) {
            a[0] = i;
 
            vector<long long> A = a;
 
            sort(A.begin(), A.end());
            sort(b.begin(), b.end());
 
            int j = n - 1;
            int match = 0;
 
            for (int k = n - 1; k >= 0 && j >= 0; k--) {
                if (A[k] < b[j]) {
                    match++;
                    j--;
                }
            }
 
            ans += (n - match);
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}