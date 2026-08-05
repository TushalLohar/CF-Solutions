#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; 
	cin>>t;
	while(t--){
		int n; 
		cin>>n;
		string s; 
		cin>>s;
		bool flag=false;
		for(int i = 0; i < n / 2 - 1; i++) 
			if(s[i] == ')') flag=true;
		cout<<(flag?n-2:-1)<<"\n";
	}
}