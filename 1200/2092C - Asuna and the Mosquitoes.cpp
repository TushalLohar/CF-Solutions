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

    ll sum=0;
    ll odd=0;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        sum+=nums[i];
        if(nums[i]%2==1) odd++;
    }
    int maxi=*max_element(nums.begin(),nums.end());
    if(odd==n || odd==0){
        cout<<maxi<<endl;
        return;
    }

    cout<<(sum-(odd-1))<<endl;


    
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