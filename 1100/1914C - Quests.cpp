#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--){
        int n,k;
        cin>>n>>k;
 
        vector<int>a(n+1),b(n+1);
 
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];
 
        long long sum=0,ans=0;
        int mx=0;
 
        for(int i=1;i<=min(n,k);i++){
            sum+=a[i];
            mx=max(mx,b[i]);
            ans=max(ans,sum+1LL*(k-i)*mx);
        }
 
        cout<<ans<<"\n";
    }
}