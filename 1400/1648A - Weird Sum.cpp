#include <bits/stdc++.h>
using namespace std;
 
const int MAX_COLOUR = 100000;
 
long long calculateSumOfAllPairs(vector<int> &v) {
    sort(v.begin(), v.end(), greater<int>());
 
    long long sum = 0;
    int n = v.size();
 
    for (int i = 0, j = n - 1; i < n; i++, j -= 2) {
        sum += 1LL * j * v[i];
    }
 
    return sum;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m;
    cin >> n >> m;
 
    int a[n][m];
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            a[i][j]--;
        }
    }
 
    vector<vector<int>> rows(MAX_COLOUR), cols(MAX_COLOUR);
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rows[a[i][j]].push_back(i);
            cols[a[i][j]].push_back(j);
        }
    }
 
    long long ans = 0;
 
    for (int color = 0; color < MAX_COLOUR; color++) {
        ans += calculateSumOfAllPairs(rows[color]);
        ans += calculateSumOfAllPairs(cols[color]);
    }
 
    cout << ans;
 
    return 0;
}