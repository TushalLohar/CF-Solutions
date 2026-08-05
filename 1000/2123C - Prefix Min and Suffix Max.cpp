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
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<int> pref(n), suffix(n);
    pref[0]=nums[0];
    for(int i=1; i<n;i++){
        pref[i]=min(pref[i-1],nums[i]);
    }
    suffix[n-1]=nums[n-1];
    for(int i =n-2; i>=0;i--){
        suffix[i]= max(suffix[i+1],nums[i]);
    }

    string ans;
    for(int i=0;i<n;i++){
        if(nums[i]==pref[i] || nums[i]==suffix[i]){
            ans+='1';
        }
        else{
            ans+='0';
        }
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