#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
	    int n; 
        cin >> n;
        int k = 2,x=3;
        while(n%x){
            k *= 2;
            x+=k;
        } 
        cout<<n/x<<"\n";
    }
}