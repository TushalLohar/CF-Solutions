#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        int d = s[i] - '0';

        if (i == 0 && d == 9)
            continue;

        int inv = 9 - d;

        if (inv < d)
            s[i] = inv + '0';
    }

    cout << s;
}