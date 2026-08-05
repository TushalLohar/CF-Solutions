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

    vector<int> a(n), b;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    b = a;
    sort(all(b));

    int l = 0;
    while (l < n && a[l] == b[l])
        l++;

    if (l == n) {
        cout << "yes\n";
        cout << "1 1\n";
        return;
    }

    int r = n - 1;
    while (r >= 0 && a[r] == b[r])
        r--;

    reverse(a.begin() + l, a.begin() + r + 1);

    if (a == b) {
        cout << "yes\n";
        cout << l + 1 << " " << r + 1 << "\n";
    } else {
        cout << "no\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}