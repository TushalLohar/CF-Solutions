#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// ---------- FAST IO ----------
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

// ---------- TYPES ----------
#define endl '\n'
#define ll long long
#define ld long double

// ---------- SHORTCUTS ----------
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second

// ---------- CONSTANTS ----------
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

int main() {
    fast_io;

    int n;
    cin>>n;

    int ans=0;

    for(int i=2;i<=n;i++){
        int cnt=0;
        int num=i;
        for(int j=2;j*j<=n;j++){
            if(num%j==0){
                cnt++;
                while(num%j==0){
                    num/=j;
                }
            }
        }

        if(num>1){
            cnt++;
        }

        if(cnt==2) ans++;

    }
    cout<<ans<<endl;

    

    return 0;
}