#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(x==n) for(int i=0;i<n;i++) cout<<i<<" ";
        else{
            for(int i=0;i<x;i++) cout<<i<<" ";
            for(int i=x+1;i<n;i++) cout<<i<<" ";
            cout<<x;
        }
        cout<<"\n";
    }
}