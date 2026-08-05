#include<iostream>
using namespace std;
int main(){
    int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;int a1=0,a2=0;
		cin>>a1;int flag=0;
		for(int j=0;j<n-1;j++){
			cin>>a2;if(a2<a1)flag=1;
			a1=a2-a1;
		}
		if(flag) cout<<"NO"<<"\n";
		else cout<<"YES"<<"\n";
	}
	return 0;
}