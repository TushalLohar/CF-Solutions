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
    int n , k;
    cin>>n>>k;
    vector<ll> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
      ll ans=0;
    if(k==1){
       ans+=max(nums[0]+*max_element(nums.begin()+1 , nums.end()), nums[n-1]+*max_element(nums.begin(), nums.end()-1));
       cout<<ans<<endl;
       return;
        
    }
    sort(nums.rbegin(),nums.rend());

  
    for(int i=0;i<=k;i++){
        ans+=nums[i];

    }
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