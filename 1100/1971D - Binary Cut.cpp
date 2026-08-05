#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,a[2];
	string s;
	cin >> t;
	while(t--) {
		cin >> s;
		a[0]=a[1]=0;
		for(int i=1;i<s.length();i++) if(s[i]!=s[i-1]) a[s[i]-'0']++;
		cout<<a[0]+a[1]+!a[1]<<"\n";
	} 
}