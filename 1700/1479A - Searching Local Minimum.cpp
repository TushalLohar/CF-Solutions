#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l=1,r=n;
    while(l<r){
        int a,b,mid=(l+r)/2;
        cout<<"? "<<mid<<"\n";
        cin>>a;
        cout<<"? "<<mid+1<<"\n";
        cin>>b;
        if(a<b)r=mid;
        else l=mid+1;
    }
    cout<<"! "<<l<<"\n";
    return 0;
}