  
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int a = 0, b = 0;
    for(auto c : s) {
        if (c == 'a') a++;
        else b++;
    }
    for(auto c : t) {
        if (c == 'a') a++;
        else b++;
    }
    if(a % 2 || b % 2) {
        cout << -1 << '\n';
        return 0;
    }
    vector<pair<int, int>> v;
    int x = -1, y = -1;
    for (int i = 0; i < n; i++) {
        if(s[i] == 'a' && t[i] == 'b'){
            if(x != -1){
                v.emplace_back(x, i);
                x = -1;
            } 
            else x = i;
            
        }
        if (t[i] == 'a' && s[i] == 'b') {
            if(y != -1){
                v.emplace_back(y, i);
                y = -1;
            } 
            else y = i;
        }
    }
    if(x != -1){
        v.emplace_back(x, x);
        v.emplace_back(x, y);
    }
    cout << v.size() << '\n';
    for(auto i : v) cout << i.first + 1 << ' ' << i.second + 1 << '\n';
}