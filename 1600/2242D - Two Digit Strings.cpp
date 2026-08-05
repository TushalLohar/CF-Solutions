#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    const int N=-30000;
    while(t--){
        string a,b;
        cin>>a>>b;
        int n=a.size(),m=b.size();
        vector<int>sa(n+1),sb(m+1);
        for(int i=0;i<n;i++) sa[i+1]=(sa[i]+a[i]-'0')%10;
        for(int i=0;i<m;i++) sb[i+1]=(sb[i]+b[i]-'0')%10;
        vector<array<int,10>>pre(m+1),r(m+1);
        for(int j=0;j<=m;j++){
            for(int c=0;c<10;c++) pre[j][c]=N;
            pre[j][0]=0;
        }
        int maxi=N;
        for(int i=1;i<=n;i++){
            for(int c=0;c<10;c++){
                r[0][c]=N;
            }
            for(int j=1;j<=m;j++){
                r[j]=r[j-1];
                int c=(sa[i]-sb[j]+10)%10;
                int ans=pre[j-1][c];
                if(ans!=N){
                    int sum=ans+1;
                    if(sum>r[j][c]) r[j][c]=sum;
                    if(i==n&&j==m&&sum>maxi) maxi=sum;
                }
            }
            for(int j=1;j<=m;j++){
                for(int c=0;c<10;c++){
                    if(r[j][c]>pre[j][c]){
                        pre[j][c]=r[j][c];
                    }
                }
            }
        }
        if(maxi==N) cout<<-1<<"\n";
        else cout<<maxi<<"\n";
    }
    return 0;
}