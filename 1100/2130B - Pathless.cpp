#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,s,x;
    cin>>n>>s;
    int b[3]={0};
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
        b[x]++;
    }
    if(s-sum==1||s-sum<0){
        while(b[1]--)cout<<"1 ";
        while(b[2]--)cout<<"2 ";
        while(b[0]--)cout<<"0 ";
        cout<<"\n";
    }
    else cout<<"-1\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}