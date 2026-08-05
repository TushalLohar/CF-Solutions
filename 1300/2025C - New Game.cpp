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
    ll n, k;
    cin >> n >> k;
    vector<ll> nums(n);
    for (ll &x : nums)
        cin >> x;

    // sort(nums.begin() ,nums.end());
    // vector<pair<ll,ll>> window;
    // for(int i=0; i<n;){
    //     int j=i;
    //     while(j<n && nums[j]==nums[i]){ // frquncy counting
    //         j++;
    //     }
    //     window.push_back({nums[i],j-i});
    //     i=j;   //next element
    // }
    map<long long, long long> freq;

    for (auto x : nums)
    {
        freq[x]++;
    }

    vector<pair<ll, ll>> window;

    for (auto &[value, cnt] : freq)
    {
        window.push_back({value, cnt});
    }
    int m = window.size();
    ll ans = 0;
    ll current_sum = 0;
    int left = 0;
    for (int right = 0; right < m; right++)
    {
        if (right > 0 && window[right].first != window[right - 1].first + 1)
        {
            left = right;
            current_sum = 0;
        }
        current_sum += window[right].second;

        while (right - left + 1 > k)
        {
            current_sum -= window[left].second;
            left++;
        }

        ans = max(ans, current_sum);
    }

    cout << ans << endl;
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