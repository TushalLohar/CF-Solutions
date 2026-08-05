#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int T;
    cin >> T;
 
    while(T--){
        int n;
        cin >> n;
 
        long long max = 0;
        int curr = 0;
        while(n--){
            cin >> curr;
 
            if(max > curr){
                max += curr;
            }
            else{
                max = curr;
            }
        }
 
        cout << max << "\n";
    }
}