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
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    vector<ll> nums(n);
    vector<ll> freq;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    ll count = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            count++;
        }
        else
        {
            freq.push_back(count);
            count = 1;
        }
    }
    freq.push_back(count);
    sort(all(freq));

    ll sum = 0;
    for (ll x : freq)
    {
        sum += x;
    }
    ll m = freq.size();
    ll currsum = sum;
    ll curr_count = m;
    ll ans = 0;

    for (int i = 0; i < m; i++)
    {
        if (i == 0 || freq[i] != freq[i - 1])
        {
            ll ops = k - currsum;
            if (ops % curr_count == 0)
            {
                ll x = ops / curr_count;

                if (x >= -freq[i] + 1)
                {
                    ans++;
                }
            }
        }
        currsum -= freq[i];
        curr_count--;
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