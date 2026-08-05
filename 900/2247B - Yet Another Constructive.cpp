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
    ll n, k,m;
    cin >> n >> k >> m;
    if (m < k)
    {
        cout << "no"<<endl;
        return;
    }

    cout << "yes"<<endl;

    int previous = 0;
    for (int i = 1; i <= n; i++)
    {
        ll cur = i % k;
        ll diff = (cur - previous + m) % m;

        if (diff == 0){
            diff = m;
        }

        cout << diff << (i == n ? '\n' : ' ');
        previous = cur;
    }
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