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
const ll maxi=1000000;
ll spf[maxi+1];
void spf_seive(){
    for(int i=0;i<=maxi;i++){
        spf[i]=i;
    }
    for(int i=2; i*i<=maxi;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=maxi;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
}
int solve(ll n){
    ll total_pf=0;
    ll distinct_pf=0;
    while(n>1){
        ll prime=spf[n];
        distinct_pf++;

        while(n%prime==0){
            total_pf++;
            n/=prime;
        }
    }
    return total_pf+distinct_pf;   
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    spf_seive();

    int t=1;
    cin >> t;

    while (t--) {
        ll n ;
        cin>>n;

        ll ans =solve(n);
        cout<<ans-1<<endl;
    }

    return 0;
}