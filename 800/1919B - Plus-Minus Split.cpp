#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int t; 
    cin>>t; 
    while(t--){ 
        int a,p=0,n=0;
         cin>>a; 
         string s; 
         cin>>s; 
         for(auto v:s)
            if(v=='+') 
                p++; 
            else
                n++; 
        cout<<abs(n-p)<<"\n";
        }
    }