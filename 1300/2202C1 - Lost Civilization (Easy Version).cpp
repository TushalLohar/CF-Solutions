 
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		stack<int>s;
		for(int i=n-1;i>=0;i--){
			while(!s.empty()&&a[i]==s.top()-1) s.pop();
			s.push(a[i]);
		}
		cout<<s.size()<<"\n";
   }
}
 