#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,l;
    cin>>n>>l;

    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    double ans = max((double)a[0], (double)(l-a[n-1]));

    for(int i=1;i<n;i++){

        double gap = (a[i]-a[i-1])/2.0;

        ans = max(ans,gap);
    }

    cout<<fixed<<setprecision(10)<<ans;

    return 0;
}