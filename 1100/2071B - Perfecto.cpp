 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1||n==8||n==49||n==288||n==1681||n==9800||n==57121||n==332928){
			cout<<-1<<"\n";
			continue;
		}
		for(int i=1;i<=n;i++){
			if(i==1||i==8||i==49||i==288||i==1681||i==9800||i==57121||i==332928){
				cout<<i+1<<" "<<i<<" ";
				i++;
			}
			else cout<<i<<" ";
		}
		cout<<"\n";
	}
}