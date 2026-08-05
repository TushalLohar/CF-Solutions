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

ll countPairs(vector<ll> &a, ll x) {
    int i = 0;
    int j = a.size() - 1;
    ll cnt = 0;

    while (i < j) {
        if (a[i] + a[j] <= x) {
            cnt += (j - i);
            i++;
        } else {
            j--;
        }
    }

    return cnt;
}

void solve() {
    int n;
    ll l, r;
    cin >> n >> l >> r;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(all(a));

    cout << countPairs(a, r) - countPairs(a, l - 1) << '\n';
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