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
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int r1 =0, r2=0;
    int positive=0 , negative =0;
    for(int i=0;i<n;i++){
        if(a[i]==1 && b[i]==1){
            positive++;
        }
        else if(a[i]==-1 && b[i]==-1){
            negative++;
        }
        else if(a[i]>b[i]){
            r1+=a[i];
        }
        else{
            r2+=b[i];
        }
    }
    while(positive--){
        if(r1<r2){
            r1++;
        }
        else{
            r2++;
        }
    }
      while(negative--){
        if(r1>r2){
            r1--;
        }
        else{
            r2--;
        }
    }
    cout<<min(r1,r2)<<endl;

    
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