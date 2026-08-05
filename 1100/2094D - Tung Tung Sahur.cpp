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
     string s1, s2;
        cin >> s1 >> s2;
        int i = 0, j = 0;
        int n = s1.size(), m = s2.size();
        bool ok = true;
        while(i < n && j < m) {
            char ch = s1[i];
            int x = 0, y = 0;
            while(i < n && s1[i] == ch){
                x++;
                i++;
            }
            while(j < m && s2[j] == ch){
                y++;
                j++;
            }
            if(y < x || y > 2 * x){
                ok = false;
                break;
            }
        }
        if (i != n || j != m) ok = false;
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