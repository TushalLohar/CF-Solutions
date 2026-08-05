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
    int n;
    cin >> n;

    vector<int> a(n + 1), nextDiff(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    nextDiff[n] = -1;

    for (int i = n - 1; i >= 1; i--) {
        if (a[i] != a[i + 1])
            nextDiff[i] = i + 1;
        else
            nextDiff[i] = nextDiff[i + 1];
    }

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;

        if (nextDiff[l] == -1 || nextDiff[l] > r)
            cout << -1 << " " << -1 << '\n';
        else
            cout << l << " " << nextDiff[l] << '\n';
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}