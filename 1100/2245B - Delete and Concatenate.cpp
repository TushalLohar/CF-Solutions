#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        long long c, sum = 0, pre = 0;
        cin >> n >> c;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());
        long long ans = sum - 1LL * n * c;
        for(int i = 0; i < n / 2; i++){
            pre += a[i];
            ans = max(ans, sum - 1LL * n * c + 1LL * (i + 1) * c - pre);
        }
        cout << ans << "\n";
    }
}
