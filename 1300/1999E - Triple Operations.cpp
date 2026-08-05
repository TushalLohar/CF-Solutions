#include<iostream>
using namespace std;
int sum[200001];
int main() {
    for(int i = 1; i <= 200000; i++)
        sum[i] = sum[i / 3] + 1;
    for(int i = 1; i <= 200000; i++) 
        sum[i] += sum[i - 1];
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        cout << sum[a] + sum[b] - 2 * sum[a - 1] << '\n';
    }
}