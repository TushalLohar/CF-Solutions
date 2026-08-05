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
ll gcdll(ll a, ll b) {
    while (b) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll lcmll(ll a, ll b) {
    return (a / gcdll(a, b)) * b;
}

void solve() {
     int n;
    cin >> n;

    vector<ll> p(n), s(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        a[i] = lcmll(p[i], s[i]);
    }

    vector<ll> pref(n), suff(n);

    pref[0] = a[0];
    for (int i = 1; i < n; i++) {
        pref[i] = gcdll(pref[i - 1], a[i]);
    }

    suff[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suff[i] = gcdll(suff[i + 1], a[i]);
    }

    bool ok = true;

    for (int i = 0; i < n; i++) {
        if (pref[i] != p[i] || suff[i] != s[i]) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}