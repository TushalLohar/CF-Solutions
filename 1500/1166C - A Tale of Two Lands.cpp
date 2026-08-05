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
    cin>>n;
    vector<ll> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
        nums[i]= abs(nums[i]);

    }
    sort(nums.begin(),nums.end());
    ll ans=0;
    for(int i=0;i<n;i++){
        ll target = 2LL*nums[i];
        ll pos = upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        ans+=(pos-i);
    }
    cout<<ans<<endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}