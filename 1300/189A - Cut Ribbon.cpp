#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <deque>
#include <list>
#include <numeric>
#include <iomanip>
#include <climits>
#include <cstring>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

#define pb push_back
#define ff first
#define ss second

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> dp(n + 1, -1);
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        if (i >= a && dp[i - a] != -1)
            dp[i] = max(dp[i], dp[i - a] + 1);

        if (i >= b && dp[i - b] != -1)
            dp[i] = max(dp[i], dp[i - b] + 1);

        if (i >= c && dp[i - c] != -1)
            dp[i] = max(dp[i], dp[i - c] + 1);
    }

    cout << dp[n] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}