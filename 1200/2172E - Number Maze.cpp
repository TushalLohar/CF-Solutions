#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long i,j;
        string s,t;
        cin>>s>>i>>j;
        t=s;
        while(--i)next_permutation(s.begin(),s.end());
        while(--j)next_permutation(t.begin(),t.end());
        long long c=0, n=s.length();
        for(long long i=0;i<n;i++) if(s[i]==t[i])c++;
        cout<<c<<'A'<<n-c<<'B'<<"\n";
    }
    return 0;
}