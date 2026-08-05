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

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = n - 1;

    ll alice = a[l++];
    ll bob = 0;

    ll last = alice;
    int moves = 1;

    bool aliceTurn = false;   // Bob moves next

    while (l <= r) {
        ll cur = 0;

        if (aliceTurn) {
            while (l <= r && cur <= last) {
                cur += a[l];
                l++;
            }
            alice += cur;
        } else {
            while (l <= r && cur <= last) {
                cur += a[r];
                r--;
            }
            bob += cur;
        }

        last = cur;
        moves++;
        aliceTurn = !aliceTurn;
    }

    cout << moves << " " << alice << " " << bob << '\n';
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