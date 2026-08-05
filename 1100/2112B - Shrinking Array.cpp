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
    for(int &x:nums) cin>>x;

    //already beautiful
    for(int i =0; i+1<n;i++){
        if(abs(nums[i]-nums[i+1])<=1){
            cout<<0<<endl;
            return;
        }
    }
    
    for(int i=0; i+1<n;i++){
        int left = min(nums[i], nums[i+1]);
        int right = max(nums[i], nums[i+1]);

        //left neigbour
        if(i>0){
            int val= nums[i-1];
            if(max(left , val-1)<= min(right , val+1)){
                cout<<1<<endl;
                return;
            }
        }
        //right neighbour
        if(i+2<n){
             int val= nums[i+2];
            if(max(left , val-1)<= min(right , val+1)){
                cout<<1<<endl;
                return;
            }

        }

    }
    cout<<-1<<endl;
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