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
    vector<ll> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++){
        vector<ll> forward_heights(n, 0);
        vector<ll> backward_hightss(n, 0);

        ll max_partition = 0;

        // forward
        for (int j = 1; j < n; j++){
            int vessel = (i + j) % n;

            max_partition = max(
                max_partition,
                nums[(i + j - 1) % n]
            );

            backward_hightss[vessel] = max_partition;
        }

        max_partition = 0;

        // opposite
        for (int j = 1; j < n; j++)
        {
            int vessel = (i - j + n) % n;

            max_partition = max(
                max_partition,
                nums[vessel]
            );

            forward_heights[vessel] = max_partition;
        }

        ll max_total_vol = 0;

        for (int k = 0; k < n; k++){
            if (k == i)
            {
                continue;
            }

            ll max_water = min(
                forward_heights[k],
                backward_hightss[k]
            );

            max_total_vol += max_water;
        }

        cout << max_total_vol;

        if (i == n - 1)
        {
            cout << '\n';
        }
        else
        {
            cout << ' ';
        }
    }
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