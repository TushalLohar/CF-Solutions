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

    int t;
    cin >> t;
    while (t--) {

        ll a , b;
        cin>>a>>b;

        if(a-b !=1){
            cout<<"NO"<<endl;
            continue;
        }

        ll num=a+b;
        ll cnt=0;
        for(int i=2; 1LL*i*i<=num;i++){
            if(num%i==0){
                
                while (num%i==0)
                {
                    cnt++;
                    num/=i;
                }
                
            }
        }


        if(num>1) cnt++;

        if(cnt==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }




        

    }

    return 0;
}