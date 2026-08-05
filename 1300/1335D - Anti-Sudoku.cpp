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
    vector<string> s(9);

    for (int i = 0; i < 9; i++)
        cin >> s[i];

    vector<pair<int, int>> pos = {
        {0,0}, {1,3}, {2,6},
        {3,1}, {4,4}, {5,7},
        {6,2}, {7,5}, {8,8}
    };

    for (auto [r, c] : pos) {
        if (s[r][c] == '9')
            s[r][c] = '1';
        else
            s[r][c]++;
    }

    for (int i = 0; i < 9; i++)
        cout << s[i] << '\n';
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