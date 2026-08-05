#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >>t;
    while(t--){
        int n,k,x;
        cin>>n>>k;
        multiset<int> s,t;
        for(int i=0;i<n;i++) {
            cin>>x;
            s.insert(min(x%k,k-x%k));
        }
        for(int i=0;i<n;i++) {
            cin>>x;
            t.insert(min(x%k,k-x%k));
        }
        cout<<(s==t?"YES\n":"NO\n");
    }
}