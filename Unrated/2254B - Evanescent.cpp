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
    string s;
    cin>>s;
    vector<pair<char,int>> pairs;
    for(int i=0;i<n;){
        int count=0;
        char ch=s[i];
        while(i<n && s[i]==ch){
            count++;
            i++;
        }
        pairs.pb({ch,count});
    }

    int delet=0;
    int x=pairs.size();

    for(int i=1;i<x-1;i++){
        if(pairs[i].ss==1){
            if(pairs[i-1].ff==pairs[i+1].ff){
                delet=max(delet,2);
            }
            else{
                delet=max(delet,1);
            }
        }
    }
    cout<<x-delet<<endl;
    
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