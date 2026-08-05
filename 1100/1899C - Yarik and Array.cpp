#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        vector<long long>a(n+1);
 
        for(int i=1;i<=n;i++) cin>>a[i];
 
        long long cur=a[1];
        long long ans=a[1];
 
        for(int i=2;i<=n;i++){
            if((abs(a[i])%2)!=(abs(a[i-1])%2)){
                cur=max(a[i],cur+a[i]);
            }
            else{
                cur=a[i];
            }
 
            ans=max(ans,cur);
        }
 
        cout<<ans<<"\n";
    }
}