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

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll mn = *min_element(all(a));
    ll mx = *max_element(all(a));

    if (mn == mx) {
        cout << 0 << " " << 1LL * n * (n - 1) / 2 << '\n';
        return;
    }

    ll cntMin = 0, cntMax = 0;

    for (ll x : a) {
        if (x == mn) cntMin++;
        if (x == mx) cntMax++;
    }

    cout << mx - mn << " " << cntMin * cntMax << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}