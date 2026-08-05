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

    int n , m ,a ,b;
    cin>>n>>m>>a>>b;

    int daily = n*a;
    int mix = (n/m)*b + (n%m)*a;
    int special = ((n+m-1)/m)*b;

    cout<<min(daily, min( mix , special));
    

    

   

    return 0;
}