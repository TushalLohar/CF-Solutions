#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n, m, x, ans = 0;
        cin >> n >> m;
        vector<long long> a(n + 2, 0);
        for (int i = 0; i < m; ++i){
            cin >> x;
            a[min(x, n)]++;
        }
        for (int i = n; i >= 1; --i) a[i] += a[i + 1];
        for (int i = 1; i < n; ++i)
            ans += a[i] * a[n - i] - a[max(1LL * i, n - i)];
        cout << ans << "\n";
    }
    return 0;
}