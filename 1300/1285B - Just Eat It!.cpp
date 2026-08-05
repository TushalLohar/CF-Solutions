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

ll kadane(vector<ll> &a, int l, int r) {
    ll best = LLONG_MIN;
    ll cur = 0;

    for (int i = l; i <= r; i++) {
        cur = max(a[i], cur + a[i]);
        best = max(best, cur);
    }

    return best;
}

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    ll sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    ll left = kadane(a, 0, n - 2);
    ll right = kadane(a, 1, n - 1);

    if (max(left, right) >= sum)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}