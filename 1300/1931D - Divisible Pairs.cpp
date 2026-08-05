#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
 
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
 
        map<pair<int,int>,ll>mp;
        ll ans=0;
 
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
 
            int rx=a%x;
            int ry=a%y;
 
            ans+=mp[{(x-rx)%x,ry}];
 
            mp[{rx,ry}]++;
        }
 
        cout<<ans<<"\n";
    }
}