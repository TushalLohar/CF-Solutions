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
    int n;
    cin >> n;
    vector<ll> nums(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> nums[i];

    if (n % 2 == 1)
    {
        cout << "NO"<<endl;
        return;
    }

    long long max_even = LLONG_MIN;
    long long min_odd = LLONG_MAX;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
            min_odd = min(min_odd, nums[i]);
        else
            max_even = max(max_even, nums[i]);
    }

    if (max_even + 1 < min_odd)
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;
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