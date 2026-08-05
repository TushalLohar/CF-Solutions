#include "bits/stdc++.h"
using namespace std;
int main(){
	int t;
    cin>>t;
    while(t--){
		string s;
        cin>>s;
        char ans = '0';
		for(auto &a:s){
			if(a == '?') a=ans;
			ans=a;
		}
        cout<<s<<'\n';
	}
}