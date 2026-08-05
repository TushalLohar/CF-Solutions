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


ll countpairs(vector<ll> &nums , ll k){
    ll n = nums.size();
    int i=0;
    int j= n-1;
    ll count =0;

    while(i<j){
        if(nums[i]+nums[j]<=k){
            count+=(j-i);
            i++;
        }
        else{
            j--;
        }
    }
    return count;

}

void solve() {
    ll n , x ,y;
    cin>>n>>x>>y;
    vector<ll> nums(n);
    ll sum=0;
    for(ll &x: nums){
        cin>>x;
        sum+=x;
    }

    ll left = sum-y;
    ll right = sum-x;
    sort(nums.begin(),nums.end());

    ll ans = countpairs(nums , right) - countpairs(nums , left-1);

    cout<<ans<<endl;


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