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
     long long n, k;
        cin >> n >> k;
 
        vector<pair<long long, long long>> health_points(n);
 
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            health_points[i] = {x, i + 1};
        }
 
        for (long long i = 0; i < n; i++)
        {
            health_points[i].first %= k;
            if (health_points[i].first == 0)
                health_points[i].first = k;
        }
 
        sort(health_points.begin(), health_points.end(),
             [&](pair<long long, long long> a, pair<long long, long long> b)
             {
                 if (a.first != b.first)
                     return a.first > b.first;
                 return a.second < b.second;
             });
 
        for (auto it : health_points)
            cout << it.second << " ";
        cout << endl;
    
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