#include<bits/stdc++.h>
using namespace std;
const int n=100000,m=1e9+7;
int f[n+5];
int main() {
    int i,t,k,x,y;
    cin>>t>>k;
    f[0]=1;
    for(i=1;i<=n;++i) f[i]=(f[i-1]+(i>=k?f[i-k]:0))%m;
    for(i=1;i<=n;++i) f[i]=(f[i]+f[i-1])%m;
    while(t--){
        cin>>x>>y;
        cout<<(f[y]-f[x-1]+m)%m<<"\n";
    }
    
}