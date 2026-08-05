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
    string x,y;
    cin>>x>>y;
    ll ans=0;
    vector<int> position[2],target[2];
    for(int i=0;i<n;i++){
        if(x[i]=='1'){
            position[i%2].pb(i);
        }
        if(y[i]=='1'){
            target[i%2].pb(i);
        }
    }
    for(int i=0;i<2;i++){
        if(position[i].size() !=target[i].size()){
            cout<<-1<<endl;
            return;
        }
        for(int j=0;j<position[i].size();j++){
            ans+= abs(position[i][j]-target[i][j])/2;
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