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
    ll n ,d;
    cin>>n>>d;
    vector<int> ans;
    ans.push_back(1);

    if(n>=3 || d%3==0){
        ans.push_back(3);
    }

    if(d==5){
        ans.push_back(5);
    }
    
    if(n>=3 || d==7){
        ans.push_back(7);
    }

    bool div9=false;

    if(n>=6 || d==9){
        div9=true;
    }
    else{
        int fact =1;
        for(int i=2; i<=n;i++){
            fact*=i;
        }
        if((fact*d) %9==0){
            div9=true;
        }
    }
    if(div9){
        ans.push_back(9);
    }

    for(int x: ans){
        cout<<x<<" ";
    }
    cout<<endl;


    
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