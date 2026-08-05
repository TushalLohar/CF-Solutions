#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flg1=0, flg2=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(i<=2 && x==0) flg1=1;
            if(i>2 && x==0) flg2=1;
        }
        if(flg1&&flg2){
            cout<<"3\n";
            cout<<"1 2\n";
            cout<<"2 "<<n-1<<"\n";
            cout<<"1 2\n";
        }
        else if(flg1){
            cout<<"2\n";
            cout<<"1 2\n";
            cout<<"1 "<<n-1<<"\n";
        }
        else if(flg2){
            cout<<"2\n";
            cout<<"3 "<<n<<"\n";
            cout<<"1 3\n";
        }
        else{
            cout<<"1\n";
            cout<<"1 "<<n<<"\n";
        }
    }
}