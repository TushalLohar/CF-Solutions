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

    vector<int> prefix(n);
    cin>>prefix[0];

    for(int i=1;i<n;i++){
        int x;
        cin>>x;

        prefix[i]= prefix[i-1]+x;
    }
    int m;
    cin>>m;

    while(m--){
        int q;
        cin>>q;

        int pile = lower_bound(prefix.begin(),prefix.end(),q)-prefix.begin();
        cout<<pile+1<<endl;


    }


   
}