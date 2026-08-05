#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, k = 0, c = 0;
        cin >> n;
        string a, b;
        cin >> a >> b;
        for(int i = 0; i < n; i++){
            if(i & 1){
                k += (a[i] == '0');
                c += (b[i] == '0');
            } 
            else{
                k += (b[i] == '0');
                c += (a[i] == '0');
            }
        }
        cout << (c >= (n + 1) / 2 && k >= n / 2 ? "YES\n" : "NO\n");
    }
    return 0;
}