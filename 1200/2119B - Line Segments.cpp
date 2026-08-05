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

void solve()
{
    ll n, sx, sy, tx, ty;
    cin >> n >> sx >> sy >> tx >> ty;
    vector<double> a(n + 1);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    a[n] = sqrt((sx - tx) * (sx - tx) + (sy - ty) * (sy - ty));
    sort(a.begin(), a.end());
    double x = a.back();
    for (int i = 0; i < n; i++)
        x -= a[i];
    cout << (x <= 0 ? "Yes\n" : "No\n");
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}